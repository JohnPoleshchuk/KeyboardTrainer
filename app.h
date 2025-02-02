#ifndef APP_H
#define APP_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QElapsedTimer>
#include <QDebug>
#include <QDateTime>
#include <QWidget>
#include <QKeyEvent>

QT_BEGIN_NAMESPACE
namespace Ui {
class app;
}
QT_END_NAMESPACE

class app : public QMainWindow
{
    Q_OBJECT

private slots :
    void exitFun();
    void mainMenu();
    void transferAuth();
    void authorizationFun();
    void createAccountFun();
    void option1Transfer();
    void option2Transfer();
    void option3Transfer();
    void option4Transfer();
    void leaderBoardTransfer();
    void option1TextFill();

public:
    app(QWidget *parent = nullptr);
    ~app();

private:
    Ui::app *ui;

protected:
    void keyPressEvent(QKeyEvent *event) override;
};

#endif // APP_H
