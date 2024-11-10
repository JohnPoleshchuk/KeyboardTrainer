/********************************************************************************
** Form generated from reading UI file 'app.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APP_H
#define UI_APP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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
    QPushButton *ButtonForgetPassword;
    QWidget *SignUp;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEditUsernameSign;
    QLineEdit *lineEditPasswordSign;
    QPushButton *ButtonExitSign;
    QPushButton *ButtonConSign;
    QPushButton *ButtonTransferSign;
    QPushButton *ButtonForgetPassword_2;
    QWidget *MainMenu;
    QLabel *label;
    QPushButton *ButtonOption1;
    QPushButton *ButtonOption2;
    QPushButton *ButtonOption3;
    QPushButton *ButtonOption4;
    QPushButton *ButtonExitMain;
    QPushButton *ButtonLeaderBoard;
    QWidget *LeadersBoard;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTableView *tableView;
    QLabel *Username;
    QLabel *Score;
    QPushButton *ButtonMainMenuLB;
    QWidget *Option1;
    QPushButton *ButtonMainMenuOP1;
    QWidget *Option2;
    QPushButton *ButtonMainMenuOP2;
    QWidget *Option3;
    QPushButton *ButtonMainMenuOP3;
    QWidget *Option4;
    QPushButton *ButtonMainMenuOP4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *app)
    {
        if (app->objectName().isEmpty())
            app->setObjectName("app");
        app->resize(770, 555);
        centralwidget = new QWidget(app);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(-20, -10, 801, 581));
        Authenticaiton = new QWidget();
        Authenticaiton->setObjectName("Authenticaiton");
        stackedWidgetAuth = new QStackedWidget(Authenticaiton);
        stackedWidgetAuth->setObjectName("stackedWidgetAuth");
        stackedWidgetAuth->setGeometry(QRect(20, 10, 771, 531));
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
        ButtonForgetPassword = new QPushButton(LogIN);
        ButtonForgetPassword->setObjectName("ButtonForgetPassword");
        ButtonForgetPassword->setGeometry(QRect(710, 300, 31, 41));
        stackedWidgetAuth->addWidget(LogIN);
        SignUp = new QWidget();
        SignUp->setObjectName("SignUp");
        label_3 = new QLabel(SignUp);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(260, 40, 281, 101));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size:35px;\n"
"}"));
        label_6 = new QLabel(SignUp);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(80, 210, 141, 81));
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size:20px;\n"
"}"));
        label_7 = new QLabel(SignUp);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(80, 280, 141, 81));
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size:20px;\n"
"}"));
        lineEditUsernameSign = new QLineEdit(SignUp);
        lineEditUsernameSign->setObjectName("lineEditUsernameSign");
        lineEditUsernameSign->setGeometry(QRect(230, 230, 471, 41));
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
        ButtonExitSign->setGeometry(QRect(560, 400, 131, 61));
        ButtonExitSign->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font-size:20px;\n"
"}"));
        ButtonConSign = new QPushButton(SignUp);
        ButtonConSign->setObjectName("ButtonConSign");
        ButtonConSign->setGeometry(QRect(240, 400, 131, 61));
        ButtonConSign->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font-size:20px;\n"
"}"));
        ButtonTransferSign = new QPushButton(SignUp);
        ButtonTransferSign->setObjectName("ButtonTransferSign");
        ButtonTransferSign->setGeometry(QRect(630, 40, 101, 41));
        ButtonTransferSign->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font-size:20px;\n"
"}"));
        ButtonForgetPassword_2 = new QPushButton(SignUp);
        ButtonForgetPassword_2->setObjectName("ButtonForgetPassword_2");
        ButtonForgetPassword_2->setGeometry(QRect(710, 300, 31, 41));
        stackedWidgetAuth->addWidget(SignUp);
        stackedWidget->addWidget(Authenticaiton);
        MainMenu = new QWidget();
        MainMenu->setObjectName("MainMenu");
        label = new QLabel(MainMenu);
        label->setObjectName("label");
        label->setGeometry(QRect(270, 30, 231, 81));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size:45px;\n"
"}"));
        ButtonOption1 = new QPushButton(MainMenu);
        ButtonOption1->setObjectName("ButtonOption1");
        ButtonOption1->setGeometry(QRect(130, 210, 161, 51));
        ButtonOption2 = new QPushButton(MainMenu);
        ButtonOption2->setObjectName("ButtonOption2");
        ButtonOption2->setGeometry(QRect(460, 210, 161, 51));
        ButtonOption3 = new QPushButton(MainMenu);
        ButtonOption3->setObjectName("ButtonOption3");
        ButtonOption3->setGeometry(QRect(460, 310, 161, 51));
        ButtonOption4 = new QPushButton(MainMenu);
        ButtonOption4->setObjectName("ButtonOption4");
        ButtonOption4->setGeometry(QRect(130, 310, 161, 51));
        ButtonExitMain = new QPushButton(MainMenu);
        ButtonExitMain->setObjectName("ButtonExitMain");
        ButtonExitMain->setGeometry(QRect(460, 410, 161, 51));
        ButtonLeaderBoard = new QPushButton(MainMenu);
        ButtonLeaderBoard->setObjectName("ButtonLeaderBoard");
        ButtonLeaderBoard->setGeometry(QRect(130, 410, 161, 51));
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
        Username->setGeometry(QRect(200, 520, 321, 41));
        Score = new QLabel(LeadersBoard);
        Score->setObjectName("Score");
        Score->setGeometry(QRect(540, 520, 111, 31));
        ButtonMainMenuLB = new QPushButton(LeadersBoard);
        ButtonMainMenuLB->setObjectName("ButtonMainMenuLB");
        ButtonMainMenuLB->setGeometry(QRect(670, 220, 91, 61));
        stackedWidget->addWidget(LeadersBoard);
        Option1 = new QWidget();
        Option1->setObjectName("Option1");
        ButtonMainMenuOP1 = new QPushButton(Option1);
        ButtonMainMenuOP1->setObjectName("ButtonMainMenuOP1");
        ButtonMainMenuOP1->setGeometry(QRect(430, 240, 91, 61));
        stackedWidget->addWidget(Option1);
        Option2 = new QWidget();
        Option2->setObjectName("Option2");
        ButtonMainMenuOP2 = new QPushButton(Option2);
        ButtonMainMenuOP2->setObjectName("ButtonMainMenuOP2");
        ButtonMainMenuOP2->setGeometry(QRect(320, 180, 91, 61));
        stackedWidget->addWidget(Option2);
        Option3 = new QWidget();
        Option3->setObjectName("Option3");
        ButtonMainMenuOP3 = new QPushButton(Option3);
        ButtonMainMenuOP3->setObjectName("ButtonMainMenuOP3");
        ButtonMainMenuOP3->setGeometry(QRect(450, 270, 91, 61));
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
        menubar->setGeometry(QRect(0, 0, 770, 23));
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
        ButtonForgetPassword->setText(QString());
        label_3->setText(QCoreApplication::translate("app", "Create Account", nullptr));
        label_6->setText(QCoreApplication::translate("app", "Username :", nullptr));
        label_7->setText(QCoreApplication::translate("app", "Password :", nullptr));
        ButtonExitSign->setText(QCoreApplication::translate("app", "EXIT", nullptr));
        ButtonConSign->setText(QCoreApplication::translate("app", "CONFIRM", nullptr));
        ButtonTransferSign->setText(QCoreApplication::translate("app", "LOG IN", nullptr));
        ButtonForgetPassword_2->setText(QString());
        label->setText(QCoreApplication::translate("app", "Main Menu", nullptr));
        ButtonOption1->setText(QCoreApplication::translate("app", "Option1", nullptr));
        ButtonOption2->setText(QCoreApplication::translate("app", "Option2", nullptr));
        ButtonOption3->setText(QCoreApplication::translate("app", "Option4", nullptr));
        ButtonOption4->setText(QCoreApplication::translate("app", "Option3", nullptr));
        ButtonExitMain->setText(QCoreApplication::translate("app", "Exit", nullptr));
        ButtonLeaderBoard->setText(QCoreApplication::translate("app", "LeaderBoard", nullptr));
        Username->setText(QString());
        Score->setText(QCoreApplication::translate("app", "TextLabel", nullptr));
        ButtonMainMenuLB->setText(QCoreApplication::translate("app", "Main Menu", nullptr));
        ButtonMainMenuOP1->setText(QCoreApplication::translate("app", "Main Menu", nullptr));
        ButtonMainMenuOP2->setText(QCoreApplication::translate("app", "Main Menu", nullptr));
        ButtonMainMenuOP3->setText(QCoreApplication::translate("app", "Main Menu", nullptr));
        ButtonMainMenuOP4->setText(QCoreApplication::translate("app", "Main Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class app: public Ui_app {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APP_H
