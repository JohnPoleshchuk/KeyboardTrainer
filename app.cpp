#include "app.h"
#include "ui_app.h"
#include <QCoreApplication>
#include "src/generator/Rand/randSymb.h"
#include <QMessageBox>
#include <string>
#include <QWidget>
#include <QKeyEvent>
#include <QTimer>

app::app(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::app)
{
    ui->setupUi(this);

    timer = new QTimer(this);

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
    connect(ui->ButtonMainMenuOP4, SIGNAL(clicked()),
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
    connect(ui->ButtonOption3, SIGNAL(clicked()),
            this, SLOT(option3Transfer()));
    connect(ui->ButtonOption4, SIGNAL(clicked()),
            this, SLOT(option4Transfer()));


    //Timer
    connect(ui->Option1ButtonStart, SIGNAL(clicked()),
            this, SLOT(startTimer()));

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &app::updateLabel);

    //Option1

    connect(ui->Option1ButtonStart, SIGNAL(clicked()),
            this, SLOT(option1TextFill()));



}

app::~app()
{
    delete ui;
}

void app::exitFun() {
    QCoreApplication::quit();
}

void app::mainMenu() {
    ui->stackedWidget->setCurrentIndex(1);

    stopTimer();
    ui->Option1OUT->setText(NULL);
    ui->Option1TIME->setText(NULL);
    ui->Option1Points->setText(NULL);
    points = 0;
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
void app::option4Transfer() {
    ui->stackedWidget->setCurrentIndex(6);
}

void app::leaderBoardTransfer() {
    ui->stackedWidget->setCurrentIndex(2);
}

void app::authorizationFun() {
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("/home/poleschuk/SoftwareEngineering/universityProgramming/typingTrainer/database/login.db");

    QString username = ui->lineEditUsernameLog->text();
    QString password = ui->lineEditPasswordLog->text();

    if (sqlitedb.open()) {
        QSqlQuery query(sqlitedb);
        query.prepare("SELECT * FROM AuthData WHERE LOGIN = :username AND PASSWORD = :password");
        query.bindValue(":username", username);
        query.bindValue(":password", password);

        if (query.exec()) {
            if (query.next()) {
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
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("/home/poleschuk/SoftwareEngineering/universityProgramming/typingTrainer/database/login.db");

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
                query.prepare("INSERT INTO AuthData "
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

        if (text == ""){
            stopTimer();
            //ui->Option1TIME->setText(QString::fromStdString());
        }

        if (event->text() == text[0]) {
            points++;
            ui->Option1Points->setText(QString::number(points));

            string finText = eraseFirstLeter(text);
            ui->Option1OUT->setText(QString::fromStdString(finText));
        }
    }
}

void app::updateLabel() {
    count++;
    ui->Option1TIME->setText(QString::number(count));
}
