/********************************************************************************
** Form generated from reading UI file 'app.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APP_H
#define UI_APP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_app
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *Authenticaiton;
    QStackedWidget *stackedWidgetAuth;
    QWidget *LogIN;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEditUsernameLog;
    QLineEdit *lineEditPasswordLog;
    QPushButton *ButtonExitLog;
    QPushButton *ButtonConLog;
    QPushButton *ButtonTransferLog;
    QWidget *SignUp;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEditUsernameSign;
    QLineEdit *lineEditPasswordSign;
    QPushButton *ButtonExitSign;
    QPushButton *ButtonConSign;
    QPushButton *ButtonTransferSign;
    QWidget *MainMenu;
    QLabel *label;
    QPushButton *ButtonOption1;
    QPushButton *ButtonExitMain;
    QPushButton *ButtonLeaderBoard;
    QPushButton *ButtonOption2;
    QPushButton *ButtonOption3;
    QLabel *UsernameMainMenu;
    QWidget *LeadersBoard;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTableView *tableView;
    QLabel *Username;
    QPushButton *ButtonMainMenuLB;
    QComboBox *LeadersBoardChoseTable;
    QPushButton *LeadersBoardUpdateButton;
    QWidget *Option1;
    QPushButton *ButtonMainMenuOP1;
    QLabel *Option1OUT;
    QPushButton *Option1ButtonStart;
    QLabel *Option1TIME;
    QLabel *Option1LabelTime;
    QLabel *Option1LabelPoints;
    QLabel *Option1Points;
    QComboBox *Option1ChoseNumber;
    QWidget *Option2;
    QPushButton *ButtonMainMenuOP2;
    QPushButton *Option2ButtonStart;
    QComboBox *Option2ChoseNumber;
    QLabel *OptionLabelPoints;
    QLabel *Option2LabelTime;
    QLabel *Option2OUT;
    QLabel *Option2Points;
    QLabel *Option2TIME;
    QWidget *Option3;
    QPushButton *ButtonMainMenuOP3;
    QPushButton *Option3ButtonStart;
    QComboBox *Option3ChoseNumber;
    QLabel *Option3LabelTime;
    QLabel *Option3OUT;
    QLabel *Option3Points;
    QLabel *Option3TIME;
    QLabel *Option3LabelPoints;
    QComboBox *Option3ChoseType;
    QWidget *Option4;
    QPushButton *ButtonMainMenuOP4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *app)
    {
        if (app->objectName().isEmpty())
            app->setObjectName("app");
        app->resize(757, 525);
        centralwidget = new QWidget(app);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(-20, -10, 801, 581));
        Authenticaiton = new QWidget();
        Authenticaiton->setObjectName("Authenticaiton");
        stackedWidgetAuth = new QStackedWidget(Authenticaiton);
        stackedWidgetAuth->setObjectName("stackedWidgetAuth");
        stackedWidgetAuth->setGeometry(QRect(10, 40, 771, 531));
        LogIN = new QWidget();
        LogIN->setObjectName("LogIN");
        label_2 = new QLabel(LogIN);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(270, 50, 281, 101));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size:35px;\n"
"}"));
        label_4 = new QLabel(LogIN);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(90, 200, 141, 81));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size:20px;\n"
"}"));
        label_5 = new QLabel(LogIN);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(90, 280, 141, 81));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size:20px;\n"
"}"));
        lineEditUsernameLog = new QLineEdit(LogIN);
        lineEditUsernameLog->setObjectName("lineEditUsernameLog");
        lineEditUsernameLog->setGeometry(QRect(230, 220, 471, 41));
        lineEditUsernameLog->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"font-size:20px;\n"
"}"));
        lineEditPasswordLog = new QLineEdit(LogIN);
        lineEditPasswordLog->setObjectName("lineEditPasswordLog");
        lineEditPasswordLog->setGeometry(QRect(230, 300, 471, 41));
        lineEditPasswordLog->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"font-size:20px;\n"
"}"));
        ButtonExitLog = new QPushButton(LogIN);
        ButtonExitLog->setObjectName("ButtonExitLog");
        ButtonExitLog->setGeometry(QRect(560, 390, 131, 61));
        ButtonExitLog->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font-size:20px;\n"
"}"));
        ButtonConLog = new QPushButton(LogIN);
        ButtonConLog->setObjectName("ButtonConLog");
        ButtonConLog->setGeometry(QRect(230, 390, 131, 61));
        ButtonConLog->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font-size:20px;\n"
"}"));
        ButtonTransferLog = new QPushButton(LogIN);
        ButtonTransferLog->setObjectName("ButtonTransferLog");
        ButtonTransferLog->setGeometry(QRect(620, 30, 101, 41));
        ButtonTransferLog->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font-size:20px;\n"
"}"));
        stackedWidgetAuth->addWidget(LogIN);
        SignUp = new QWidget();
        SignUp->setObjectName("SignUp");
        label_3 = new QLabel(SignUp);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(260, 50, 281, 101));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size:35px;\n"
"}"));
        label_6 = new QLabel(SignUp);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(90, 200, 141, 81));
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size:20px;\n"
"}"));
        label_7 = new QLabel(SignUp);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(90, 280, 141, 81));
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size:20px;\n"
"}"));
        lineEditUsernameSign = new QLineEdit(SignUp);
        lineEditUsernameSign->setObjectName("lineEditUsernameSign");
        lineEditUsernameSign->setGeometry(QRect(230, 220, 471, 41));
        lineEditUsernameSign->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"font-size:20px;\n"
"}"));
        lineEditPasswordSign = new QLineEdit(SignUp);
        lineEditPasswordSign->setObjectName("lineEditPasswordSign");
        lineEditPasswordSign->setGeometry(QRect(230, 300, 471, 41));
        lineEditPasswordSign->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"font-size:20px;\n"
"}"));
        ButtonExitSign = new QPushButton(SignUp);
        ButtonExitSign->setObjectName("ButtonExitSign");
        ButtonExitSign->setGeometry(QRect(560, 390, 131, 61));
        ButtonExitSign->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font-size:20px;\n"
"}"));
        ButtonConSign = new QPushButton(SignUp);
        ButtonConSign->setObjectName("ButtonConSign");
        ButtonConSign->setGeometry(QRect(230, 390, 131, 61));
        ButtonConSign->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font-size:20px;\n"
"}"));
        ButtonTransferSign = new QPushButton(SignUp);
        ButtonTransferSign->setObjectName("ButtonTransferSign");
        ButtonTransferSign->setGeometry(QRect(620, 30, 101, 41));
        ButtonTransferSign->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font-size:20px;\n"
"}"));
        stackedWidgetAuth->addWidget(SignUp);
        stackedWidget->addWidget(Authenticaiton);
        MainMenu = new QWidget();
        MainMenu->setObjectName("MainMenu");
        label = new QLabel(MainMenu);
        label->setObjectName("label");
        label->setGeometry(QRect(290, 30, 231, 81));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size:45px;\n"
"}"));
        ButtonOption1 = new QPushButton(MainMenu);
        ButtonOption1->setObjectName("ButtonOption1");
        ButtonOption1->setGeometry(QRect(90, 260, 161, 51));
        ButtonExitMain = new QPushButton(MainMenu);
        ButtonExitMain->setObjectName("ButtonExitMain");
        ButtonExitMain->setGeometry(QRect(450, 390, 161, 51));
        ButtonLeaderBoard = new QPushButton(MainMenu);
        ButtonLeaderBoard->setObjectName("ButtonLeaderBoard");
        ButtonLeaderBoard->setGeometry(QRect(190, 390, 161, 51));
        ButtonOption2 = new QPushButton(MainMenu);
        ButtonOption2->setObjectName("ButtonOption2");
        ButtonOption2->setGeometry(QRect(320, 260, 161, 51));
        ButtonOption3 = new QPushButton(MainMenu);
        ButtonOption3->setObjectName("ButtonOption3");
        ButtonOption3->setGeometry(QRect(550, 260, 161, 51));
        UsernameMainMenu = new QLabel(MainMenu);
        UsernameMainMenu->setObjectName("UsernameMainMenu");
        UsernameMainMenu->setGeometry(QRect(20, 10, 321, 51));
        stackedWidget->addWidget(MainMenu);
        LeadersBoard = new QWidget();
        LeadersBoard->setObjectName("LeadersBoard");
        scrollArea = new QScrollArea(LeadersBoard);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(180, 20, 451, 491));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 449, 489));
        tableView = new QTableView(scrollAreaWidgetContents);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(0, 0, 451, 491));
        scrollArea->setWidget(scrollAreaWidgetContents);
        Username = new QLabel(LeadersBoard);
        Username->setObjectName("Username");
        Username->setGeometry(QRect(200, 510, 321, 51));
        ButtonMainMenuLB = new QPushButton(LeadersBoard);
        ButtonMainMenuLB->setObjectName("ButtonMainMenuLB");
        ButtonMainMenuLB->setGeometry(QRect(670, 220, 91, 61));
        LeadersBoardChoseTable = new QComboBox(LeadersBoard);
        LeadersBoardChoseTable->addItem(QString());
        LeadersBoardChoseTable->addItem(QString());
        LeadersBoardChoseTable->setObjectName("LeadersBoardChoseTable");
        LeadersBoardChoseTable->setGeometry(QRect(50, 300, 91, 26));
        LeadersBoardUpdateButton = new QPushButton(LeadersBoard);
        LeadersBoardUpdateButton->setObjectName("LeadersBoardUpdateButton");
        LeadersBoardUpdateButton->setGeometry(QRect(50, 220, 91, 61));
        stackedWidget->addWidget(LeadersBoard);
        Option1 = new QWidget();
        Option1->setObjectName("Option1");
        ButtonMainMenuOP1 = new QPushButton(Option1);
        ButtonMainMenuOP1->setObjectName("ButtonMainMenuOP1");
        ButtonMainMenuOP1->setGeometry(QRect(630, 390, 91, 61));
        Option1OUT = new QLabel(Option1);
        Option1OUT->setObjectName("Option1OUT");
        Option1OUT->setGeometry(QRect(100, 270, 591, 81));
        Option1OUT->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size:30px;\n"
"}"));
        Option1ButtonStart = new QPushButton(Option1);
        Option1ButtonStart->setObjectName("Option1ButtonStart");
        Option1ButtonStart->setGeometry(QRect(330, 390, 111, 61));
        Option1TIME = new QLabel(Option1);
        Option1TIME->setObjectName("Option1TIME");
        Option1TIME->setGeometry(QRect(130, 130, 571, 81));
        Option1TIME->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size:30px;\n"
"}"));
        Option1LabelTime = new QLabel(Option1);
        Option1LabelTime->setObjectName("Option1LabelTime");
        Option1LabelTime->setGeometry(QRect(30, 130, 71, 81));
        Option1LabelTime->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size:30px;\n"
"}"));
        Option1LabelPoints = new QLabel(Option1);
        Option1LabelPoints->setObjectName("Option1LabelPoints");
        Option1LabelPoints->setGeometry(QRect(30, 40, 91, 81));
        Option1LabelPoints->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size:30px;\n"
"}"));
        Option1Points = new QLabel(Option1);
        Option1Points->setObjectName("Option1Points");
        Option1Points->setGeometry(QRect(130, 40, 571, 81));
        Option1Points->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size:30px;\n"
"}"));
        Option1ChoseNumber = new QComboBox(Option1);
        Option1ChoseNumber->addItem(QString());
        Option1ChoseNumber->addItem(QString());
        Option1ChoseNumber->addItem(QString());
        Option1ChoseNumber->addItem(QString());
        Option1ChoseNumber->setObjectName("Option1ChoseNumber");
        Option1ChoseNumber->setGeometry(QRect(240, 390, 79, 26));
        stackedWidget->addWidget(Option1);
        Option2 = new QWidget();
        Option2->setObjectName("Option2");
        ButtonMainMenuOP2 = new QPushButton(Option2);
        ButtonMainMenuOP2->setObjectName("ButtonMainMenuOP2");
        ButtonMainMenuOP2->setGeometry(QRect(630, 370, 91, 61));
        Option2ButtonStart = new QPushButton(Option2);
        Option2ButtonStart->setObjectName("Option2ButtonStart");
        Option2ButtonStart->setGeometry(QRect(430, 370, 111, 61));
        Option2ChoseNumber = new QComboBox(Option2);
        Option2ChoseNumber->addItem(QString());
        Option2ChoseNumber->addItem(QString());
        Option2ChoseNumber->addItem(QString());
        Option2ChoseNumber->addItem(QString());
        Option2ChoseNumber->setObjectName("Option2ChoseNumber");
        Option2ChoseNumber->setGeometry(QRect(340, 370, 79, 26));
        OptionLabelPoints = new QLabel(Option2);
        OptionLabelPoints->setObjectName("OptionLabelPoints");
        OptionLabelPoints->setGeometry(QRect(30, 10, 91, 81));
        OptionLabelPoints->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size:30px;\n"
"}"));
        Option2LabelTime = new QLabel(Option2);
        Option2LabelTime->setObjectName("Option2LabelTime");
        Option2LabelTime->setGeometry(QRect(30, 80, 71, 81));
        Option2LabelTime->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size:30px;\n"
"}"));
        Option2OUT = new QLabel(Option2);
        Option2OUT->setObjectName("Option2OUT");
        Option2OUT->setGeometry(QRect(60, 230, 591, 81));
        Option2OUT->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size:30px;\n"
"}"));
        Option2Points = new QLabel(Option2);
        Option2Points->setObjectName("Option2Points");
        Option2Points->setGeometry(QRect(120, 10, 571, 81));
        Option2Points->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size:30px;\n"
"}"));
        Option2TIME = new QLabel(Option2);
        Option2TIME->setObjectName("Option2TIME");
        Option2TIME->setGeometry(QRect(110, 80, 571, 81));
        Option2TIME->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size:30px;\n"
"}"));
        stackedWidget->addWidget(Option2);
        Option3 = new QWidget();
        Option3->setObjectName("Option3");
        ButtonMainMenuOP3 = new QPushButton(Option3);
        ButtonMainMenuOP3->setObjectName("ButtonMainMenuOP3");
        ButtonMainMenuOP3->setGeometry(QRect(640, 370, 91, 61));
        Option3ButtonStart = new QPushButton(Option3);
        Option3ButtonStart->setObjectName("Option3ButtonStart");
        Option3ButtonStart->setGeometry(QRect(400, 370, 111, 61));
        Option3ChoseNumber = new QComboBox(Option3);
        Option3ChoseNumber->addItem(QString());
        Option3ChoseNumber->addItem(QString());
        Option3ChoseNumber->addItem(QString());
        Option3ChoseNumber->setObjectName("Option3ChoseNumber");
        Option3ChoseNumber->setGeometry(QRect(300, 380, 79, 26));
        Option3LabelTime = new QLabel(Option3);
        Option3LabelTime->setObjectName("Option3LabelTime");
        Option3LabelTime->setGeometry(QRect(30, 100, 71, 81));
        Option3LabelTime->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size:30px;\n"
"}"));
        Option3OUT = new QLabel(Option3);
        Option3OUT->setObjectName("Option3OUT");
        Option3OUT->setGeometry(QRect(40, 230, 591, 81));
        Option3OUT->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size:30px;\n"
"}"));
        Option3Points = new QLabel(Option3);
        Option3Points->setObjectName("Option3Points");
        Option3Points->setGeometry(QRect(120, 20, 571, 81));
        Option3Points->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size:30px;\n"
"}"));
        Option3TIME = new QLabel(Option3);
        Option3TIME->setObjectName("Option3TIME");
        Option3TIME->setGeometry(QRect(110, 100, 571, 81));
        Option3TIME->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size:30px;\n"
"}"));
        Option3LabelPoints = new QLabel(Option3);
        Option3LabelPoints->setObjectName("Option3LabelPoints");
        Option3LabelPoints->setGeometry(QRect(30, 20, 91, 81));
        Option3LabelPoints->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size:30px;\n"
"}"));
        Option3ChoseType = new QComboBox(Option3);
        Option3ChoseType->addItem(QString());
        Option3ChoseType->addItem(QString());
        Option3ChoseType->setObjectName("Option3ChoseType");
        Option3ChoseType->setGeometry(QRect(200, 380, 79, 26));
        stackedWidget->addWidget(Option3);
        Option4 = new QWidget();
        Option4->setObjectName("Option4");
        ButtonMainMenuOP4 = new QPushButton(Option4);
        ButtonMainMenuOP4->setObjectName("ButtonMainMenuOP4");
        ButtonMainMenuOP4->setGeometry(QRect(420, 200, 91, 61));
        stackedWidget->addWidget(Option4);
        app->setCentralWidget(centralwidget);
        menubar = new QMenuBar(app);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 757, 26));
        app->setMenuBar(menubar);
        statusbar = new QStatusBar(app);
        statusbar->setObjectName("statusbar");
        app->setStatusBar(statusbar);

        retranslateUi(app);

        QMetaObject::connectSlotsByName(app);
    } // setupUi

    void retranslateUi(QMainWindow *app)
    {
        app->setWindowTitle(QCoreApplication::translate("app", "app", nullptr));
        label_2->setText(QCoreApplication::translate("app", "Authentication", nullptr));
        label_4->setText(QCoreApplication::translate("app", "Username :", nullptr));
        label_5->setText(QCoreApplication::translate("app", "Password :", nullptr));
        ButtonExitLog->setText(QCoreApplication::translate("app", "EXIT", nullptr));
        ButtonConLog->setText(QCoreApplication::translate("app", "CONFIRM", nullptr));
        ButtonTransferLog->setText(QCoreApplication::translate("app", "SIGN UP", nullptr));
        label_3->setText(QCoreApplication::translate("app", "Create Account", nullptr));
        label_6->setText(QCoreApplication::translate("app", "Username :", nullptr));
        label_7->setText(QCoreApplication::translate("app", "Password :", nullptr));
        ButtonExitSign->setText(QCoreApplication::translate("app", "EXIT", nullptr));
        ButtonConSign->setText(QCoreApplication::translate("app", "CONFIRM", nullptr));
        ButtonTransferSign->setText(QCoreApplication::translate("app", "LOG IN", nullptr));
        label->setText(QCoreApplication::translate("app", "Main Menu", nullptr));
        ButtonOption1->setText(QCoreApplication::translate("app", "Option1", nullptr));
        ButtonExitMain->setText(QCoreApplication::translate("app", "Exit", nullptr));
        ButtonLeaderBoard->setText(QCoreApplication::translate("app", "LeaderBoard", nullptr));
        ButtonOption2->setText(QCoreApplication::translate("app", "Option2", nullptr));
        ButtonOption3->setText(QCoreApplication::translate("app", "Option3", nullptr));
        UsernameMainMenu->setText(QString());
        Username->setText(QString());
        ButtonMainMenuLB->setText(QCoreApplication::translate("app", "Main Menu", nullptr));
        LeadersBoardChoseTable->setItemText(0, QCoreApplication::translate("app", "Symbols", nullptr));
        LeadersBoardChoseTable->setItemText(1, QCoreApplication::translate("app", "Words", nullptr));

        LeadersBoardUpdateButton->setText(QCoreApplication::translate("app", "Update", nullptr));
        ButtonMainMenuOP1->setText(QCoreApplication::translate("app", "Main Menu", nullptr));
        Option1OUT->setText(QString());
        Option1ButtonStart->setText(QCoreApplication::translate("app", "Start", nullptr));
        Option1TIME->setText(QString());
        Option1LabelTime->setText(QCoreApplication::translate("app", "Time", nullptr));
        Option1LabelPoints->setText(QCoreApplication::translate("app", "Points", nullptr));
        Option1Points->setText(QString());
        Option1ChoseNumber->setItemText(0, QCoreApplication::translate("app", "200", nullptr));
        Option1ChoseNumber->setItemText(1, QCoreApplication::translate("app", "100", nullptr));
        Option1ChoseNumber->setItemText(2, QCoreApplication::translate("app", "50", nullptr));
        Option1ChoseNumber->setItemText(3, QCoreApplication::translate("app", "25", nullptr));

        ButtonMainMenuOP2->setText(QCoreApplication::translate("app", "Main Menu", nullptr));
        Option2ButtonStart->setText(QCoreApplication::translate("app", "Start", nullptr));
        Option2ChoseNumber->setItemText(0, QCoreApplication::translate("app", "50", nullptr));
        Option2ChoseNumber->setItemText(1, QCoreApplication::translate("app", "25", nullptr));
        Option2ChoseNumber->setItemText(2, QCoreApplication::translate("app", "15", nullptr));
        Option2ChoseNumber->setItemText(3, QCoreApplication::translate("app", "5", nullptr));

        OptionLabelPoints->setText(QCoreApplication::translate("app", "Points", nullptr));
        Option2LabelTime->setText(QCoreApplication::translate("app", "Time", nullptr));
        Option2OUT->setText(QString());
        Option2Points->setText(QString());
        Option2TIME->setText(QString());
        ButtonMainMenuOP3->setText(QCoreApplication::translate("app", "Main Menu", nullptr));
        Option3ButtonStart->setText(QCoreApplication::translate("app", "Start", nullptr));
        Option3ChoseNumber->setItemText(0, QCoreApplication::translate("app", "60", nullptr));
        Option3ChoseNumber->setItemText(1, QCoreApplication::translate("app", "30", nullptr));
        Option3ChoseNumber->setItemText(2, QCoreApplication::translate("app", "15", nullptr));

        Option3LabelTime->setText(QCoreApplication::translate("app", "Time", nullptr));
        Option3OUT->setText(QString());
        Option3Points->setText(QString());
        Option3TIME->setText(QString());
        Option3LabelPoints->setText(QCoreApplication::translate("app", "Points", nullptr));
        Option3ChoseType->setItemText(0, QCoreApplication::translate("app", "Symbols", nullptr));
        Option3ChoseType->setItemText(1, QCoreApplication::translate("app", "Words", nullptr));

        ButtonMainMenuOP4->setText(QCoreApplication::translate("app", "Main Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class app: public Ui_app {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APP_H
