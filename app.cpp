#include "app.h"
#include "ui_app.h"
#include <QCoreApplication>
#include "src/generator/Rand/randSymb.h"
#include "src/generator/WordsENG/words.h"
#include <QMessageBox>
#include <string>
#include <QWidget>
#include <QKeyEvent>
#include <QTimer>
#include <QSqlTableModel>
#include <QAudioFormat>
#include <qaudiooutput.h>

app::app(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::app)
{
    ui->setupUi(this);

    // Enable window scaling
    this->setWindowFlags(Qt::Window | Qt::WindowMinMaxButtonsHint | Qt::WindowCloseButtonHint);
    this->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    // Make the central widget resize with the window
    ui->centralwidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    // Make stacked widgets resize with the window
    ui->stackedWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    ui->stackedWidgetAuth->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    sqlitedb.setDatabaseName("C:/SoftwareEngineering/Project/KeyboardTrainer/database/login.db");

    //Exit
    connect(ui->ButtonExitLog, SIGNAL(clicked()),
            this, SLOT(exitFun()));
    connect(ui->ButtonExitSign, SIGNAL(clicked()),
            this, SLOT(exitFun()));
    connect(ui->ButtonExitMain, SIGNAL(clicked()),
            this, SLOT(exitFun()));


    //MainMenu
    connect(ui->ButtonMainMenuLB, SIGNAL(clicked()),
            this, SLOT(mainMenu()));
    connect(ui->ButtonMainMenuOP1, SIGNAL(clicked()),
            this, SLOT(mainMenu()));
    connect(ui->ButtonMainMenuOP2, SIGNAL(clicked()),
            this, SLOT(mainMenu()));
    connect(ui->ButtonMainMenuOP3, SIGNAL(clicked()),
            this, SLOT(mainMenu()));

    //Log in <-> Sign Up
    connect(ui->ButtonTransferLog, SIGNAL(clicked()),
            this, SLOT(transferAuth()));
    connect(ui->ButtonTransferSign, SIGNAL(clicked()),
            this, SLOT(transferAuth()));

    //Confirm Log IN and Main menu transfer
    connect(ui->ButtonConLog, SIGNAL(clicked()),
            this, SLOT(authorizationFun()));

    //Sign Up Confirm
    connect(ui->ButtonConSign, SIGNAL(clicked()),
            this, SLOT(createAccountFun()));

    //Main menu Buttons
    connect(ui->ButtonLeaderBoard, SIGNAL(clicked()),
            this, SLOT(leaderBoardTransfer()));
    connect(ui->ButtonOption1, SIGNAL(clicked()),
            this, SLOT(option1Transfer()));
    connect(ui->ButtonOption2, SIGNAL(clicked()),
            this, SLOT(option2Transfer()));

    //LeaderBoard
    connect(ui->LeadersBoardUpdateButton, SIGNAL(clicked()),
            this, SLOT(leaderBoardUpdate()));


    //Timer
    connect(ui->Option1ButtonStart, SIGNAL(clicked()),
            this, SLOT(startTimer()));

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &app::updateLabel);

    //Option1

    connect(ui->Option1ButtonStart, SIGNAL(clicked()),
            this, SLOT(option1TextFill()));
    ui->Option1ButtonStart->setFocusPolicy(Qt::NoFocus);
    ui->Option1ChoseNumber->setFocusPolicy(Qt::NoFocus);
    ui->ButtonMainMenuOP1->setFocusPolicy(Qt::NoFocus);

    //Option2
    connect(ui->Option2ButtonStart, SIGNAL(clicked()),
            this, SLOT(option2TextFill()));
    ui->Option2ButtonStart->setFocusPolicy(Qt::NoFocus);
    ui->Option2ChoseNumber->setFocusPolicy(Qt::NoFocus);
    ui->ButtonMainMenuOP2->setFocusPolicy(Qt::NoFocus);

    //option3
    connect(ui->ButtonOption3, SIGNAL(clicked()),
            this, SLOT(option3Transfer()));
    connect(ui->Option3ButtonStart, SIGNAL(clicked()),
            this, SLOT(option3TextFill()));
    ui->Option3ButtonStart->setFocusPolicy(Qt::NoFocus);
    ui->Option3ChoseNumber->setFocusPolicy(Qt::NoFocus);
    ui->ButtonMainMenuOP3->setFocusPolicy(Qt::NoFocus);
    ui->Option3ChoseType->setFocusPolicy(Qt::NoFocus);

    //background music
    audioOutput = new QAudioOutput(this);
    musicPlayer = new QMediaPlayer(this);
    musicPlayer->setAudioOutput(audioOutput);

    // Load music
    musicPlayer->setSource(QUrl("C:/SoftwareEngineering/Project/KeyboardTrainer/music/Elv.mp3"));

    // Error handling
    connect(musicPlayer, &QMediaPlayer::errorOccurred, [](auto error, auto errorString) {
        qDebug() << "Music error:" << errorString;
    });

    // Configure
    audioOutput->setVolume(0.1); // 50% volume
    musicPlayer->setLoops(QMediaPlayer::Infinite);

    // Play
    musicPlayer->play();


}

app::~app()
{
    delete ui;
}

void app::exitFun() {
    QCoreApplication::quit();
}

void app::setVolume(int volume) {
    audioOutput->setVolume(volume / 100.0);
}

void app::writeResultDatabase(double result) {
    if (sqlitedb.open()) {
        QSqlQuery query(sqlitedb);
        if (ui->stackedWidget->currentIndex() == 3 || ((ui->stackedWidget->currentIndex() == 5) && (ui->Option3ChoseType->currentText() == "Symbols"))) {
            query.prepare("SELECT SYMBOLS_RESULT FROM AuthData WHERE LOGIN = :username");
        } else {
            query.prepare("SELECT WORDS_RESULT FROM AuthData WHERE LOGIN = :username");
        }
        query.bindValue(":username", login);

        if (query.exec()) {
            if (query.next()) {

                double n = query.value(0).toDouble();

                if (n < result) {
                    QSqlQuery query(sqlitedb);
                    if (ui->stackedWidget->currentIndex() == 3 || ((ui->stackedWidget->currentIndex() == 5) && (ui->Option3ChoseType->currentText() == "Symbols"))) {
                        query.prepare("UPDATE AuthData SET SYMBOLS_RESULT = :result WHERE LOGIN = :username;");
                    } else {
                        query.prepare("UPDATE AuthData SET WORDS_RESULT = :result WHERE LOGIN = :username;");
                    }
                    query.bindValue(":username", login);
                    query.bindValue(":result", result);
                    query.exec();
                }
            } else {
                QMessageBox::information(this, "Error",
                                         "Error");
            }
        }
    }
}

void app::exitMainMenu() {
    stopTimer();

    ui->Option1OUT->setText(NULL);
    ui->Option1TIME->setText(NULL);
    ui->Option1Points->setText(NULL);

    ui->Option2OUT->setText(NULL);
    ui->Option2TIME->setText(NULL);
    ui->Option2Points->setText(NULL);

    ui->Option3OUT->setText(NULL);
    ui->Option3TIME->setText(NULL);
    ui->Option3Points->setText(NULL);

    points = 0;
}

void app::mainMenu() {
    ui->stackedWidget->setCurrentIndex(1);

    exitMainMenu();
}

void app::transferAuth() {
    if(ui->stackedWidgetAuth->currentIndex() == 0) {
        ui->stackedWidgetAuth->setCurrentIndex(1);
    } else {
        ui->stackedWidgetAuth->setCurrentIndex(0);
    }
}

void app::option1Transfer() {
    ui->stackedWidget->setCurrentIndex(3);
}
void app::option2Transfer() {
    ui->stackedWidget->setCurrentIndex(4);
}
void app::option3Transfer() {
    ui->stackedWidget->setCurrentIndex(5);
}

void app::leaderBoardTransfer() {
    ui->stackedWidget->setCurrentIndex(2);
    ui->Username->setText(login);

    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    QSqlTableModel* modal = new QSqlTableModel();
    if (sqlitedb.open()) {
        QSqlQuery query(sqlitedb);

        modal->setTable("AuthData");
        if (ui->LeadersBoardChoseTable->currentText() == QString::fromStdString("Symbols")) {
            modal->sort(2, Qt::DescendingOrder);
        } else {
            modal->sort(3, Qt::DescendingOrder);
        }
        modal->select();
        ui->tableView->setModel(modal);
        ui->tableView->setColumnHidden(1,true);
        if (ui->LeadersBoardChoseTable->currentText() == QString::fromStdString("Symbols")) {
            ui->tableView->setColumnHidden(3,true);
            ui->tableView->setColumnHidden(2,false);
        } else {
            ui->tableView->setColumnHidden(2,true);
            ui->tableView->setColumnHidden(3,false);
        }
        ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    }
}

void app::leaderBoardUpdate() {
    QSqlTableModel* modal = new QSqlTableModel();
    if (sqlitedb.open()) {
        QSqlQuery query(sqlitedb);

        modal->setTable("AuthData");
        if (ui->LeadersBoardChoseTable->currentText() == QString::fromStdString("Symbols")) {
            modal->sort(2, Qt::DescendingOrder);
        } else {
            modal->sort(3, Qt::DescendingOrder);
        }
        modal->select();
        ui->tableView->setModel(modal);
        ui->tableView->setColumnHidden(1,true);
        if (ui->LeadersBoardChoseTable->currentText() == QString::fromStdString("Symbols")) {
            ui->tableView->setColumnHidden(3,true);
            ui->tableView->setColumnHidden(2,false);
        } else {
            ui->tableView->setColumnHidden(2,true);
            ui->tableView->setColumnHidden(3,false);
        }
        ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    }
}

void app::authorizationFun() {
    QString username = ui->lineEditUsernameLog->text();
    QString password = ui->lineEditPasswordLog->text();

    if (sqlitedb.open()) {
        QSqlQuery query(sqlitedb);
        query.prepare("SELECT * FROM AuthData WHERE LOGIN = :username AND PASSWORD = :password");
        query.bindValue(":username", username);
        query.bindValue(":password", password);

        if (query.exec()) {
            if (query.next()) {
                login = username;
                ui->UsernameMainMenu->setText(login);
                ui->stackedWidget->setCurrentIndex(1);
            } else {
                QMessageBox::information(this, "Incorect Login or Password",
                                                "Error");
            }
        } else {
            QMessageBox::information(this, "Database Error",
                                            "Error");
        }
    } else {
        QMessageBox::information(this, "Connection Error",
                                        "Error");
    }

    sqlitedb.close();
}

void app::createAccountFun() {
    QString username = ui->lineEditUsernameSign->text();
    QString password = ui->lineEditPasswordSign->text();

    if (sqlitedb.open()) {
        QSqlQuery query(sqlitedb);
        query.prepare("SELECT * FROM AuthData WHERE LOGIN = :username");
        query.bindValue(":username", username);

        if (query.exec()) {
            if (query.next()) {
                QMessageBox::information(this, "",
                                         "Error : Login Alredy Registred");
            } else {
                QSqlQuery query(sqlitedb);
                query.prepare("INSERT INTO AuthData (LOGIN, PASSWORD)"
                              "VALUES (:username, :password);");
                query.bindValue(":username", username);
                query.bindValue(":password", password);
                query.exec();
            }
        } else {
            QMessageBox::information(this, "Database Error",
                                     "Error");
        }
    } else {
        QMessageBox::information(this, "Connection Error",
                                 "Error");
    }
}

void app::startTimer() {
    count = 0;
    timer->start(1000);
}

void app::stopTimer() {
    timer->stop();
    timeCount = count;
    count = 0;
}


void app::option1TextFill() {
    string out = "";
    srand( (unsigned)time(NULL) );

    QString Qn = ui->Option1ChoseNumber->currentText();
    int n = Qn.toInt();

    for (int i = 0; i < n; i++) {
        out += genRandom();
    }
    ui->Option1OUT->setText(QString::fromStdString(out));
    startTimer();
    points = 0;
};

void app::option2TextFill() {
    string out = "";
    srand( (unsigned)time(NULL) );

    QString Qn = ui->Option2ChoseNumber->currentText();
    int n = Qn.toInt();

    for (int i = 0; i < n; i++) {
        out += genEngWord() + " ";
    }
    ui->Option2OUT->setText(QString::fromStdString(out));
    startTimer();
    points = 0;
};

void app::option3TextFill() {
    string out = "";
    srand( (unsigned)time(NULL) );

    if (ui->Option3ChoseType->currentText() == (QString::fromStdString("Symbols"))) {
        for (int i = 0; i < 60; i++) {
            out += genRandom();
        }
    } else {
        for (int i = 0; i < 9; i++) {
            out += genEngWord() + " ";
        }
    }

    ui->Option3OUT->setText(QString::fromStdString(out));
    startTimer();
    points = 0;
};

void app::option3End() {
    QString Qn = ui->Option3ChoseNumber->currentText();
    int n = Qn.toInt();

    if (count >= n){
        stopTimer();

        double result = (double)(points/timeCount) * 60;
        writeResultDatabase(result);

        ui->Option3OUT->setText(NULL);
    }
}

string eraseFirstLeter(string text) {
    string result = "";
    for (int i = 1; i < text.size(); i++) {
        result = result + text[i];
    }
    return result;
}

void app::keyPressEvent(QKeyEvent *event) {
    if (ui->stackedWidget->currentIndex() == 3)
    {
        QString Qtext = ui->Option1OUT->text();
        std::string text = Qtext.toUtf8().constData();

        if (event->text() == text[0]) {
            points++;
            ui->Option1Points->setText(QString::number(points));

            string finText = eraseFirstLeter(text);
            ui->Option1OUT->setText(QString::fromStdString(finText));
            if (text.size() == 1){
                stopTimer();


                double result = (double)(points/timeCount) * 60;
                writeResultDatabase(result);
            }
        }
    }
    if (ui->stackedWidget->currentIndex() == 4) {
        QString Qtext = ui->Option2OUT->text();
        std::string text = Qtext.toUtf8().constData();

        if (event->text() == text[0]) {
            points++;
            ui->Option2Points->setText(QString::number(points));

            string finText = eraseFirstLeter(text);
            ui->Option2OUT->setText(QString::fromStdString(finText));
            if (text.size() == 2){
                stopTimer();

                double result = (double)(points/timeCount) * 60;
                writeResultDatabase(result);
            }
        }
    }
    if (ui->stackedWidget->currentIndex() == 5) {
        QString Qtext = ui->Option3OUT->text();
        std::string text = Qtext.toUtf8().constData();

        if (event->text() == text[0]) {
            points++;
            ui->Option3Points->setText(QString::number(points));

            string finText = eraseFirstLeter(text);

            if (ui->Option3ChoseType->currentText() == "Symbols") {
                finText += genRandom();
            } else {
                if (text[0] == ' ') {
                    finText += genEngWord() + " ";
                }
            }

            ui->Option3OUT->setText(QString::fromStdString(finText));
        }
    }
}

void app::updateLabel() {
    count++;
    if (ui->stackedWidget->currentIndex() == 3) {
        ui->Option1TIME->setText(QString::number(count));
    }
    if (ui->stackedWidget->currentIndex() == 4) {
        ui->Option2TIME->setText(QString::number(count));
    }
    if (ui->stackedWidget->currentIndex() == 5) {
        ui->Option3TIME->setText(QString::number(count));

        option3End();
    }
}
