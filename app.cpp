#include "app.h"
#include "ui_app.h"
#include <QCoreApplication>

app::app(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::app)
{
    ui->setupUi(this);

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

    //Leader Board Widget

    ui->stackedWidget->setCurrentIndex(0);
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
}

void app::transferAuth() {
    if(ui->stackedWidgetAuth->currentIndex() == 0) {
        ui->stackedWidgetAuth->setCurrentIndex(1);
    } else {
        ui->stackedWidgetAuth->setCurrentIndex(0);
    }
}

void app::authorizationFun() {
    ui->stackedWidget->setCurrentIndex(1);
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
