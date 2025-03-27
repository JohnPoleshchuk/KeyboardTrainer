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
#include <QtMultimedia>
#include <QMediaPlayer>
#include <qmediaplayer.h>


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
    void leaderBoardUpdate();

    void option1TextFill();
    void option2TextFill();
    void option3TextFill();

    void startTimer();
    void stopTimer();

    void updateLabel();
    void exitMainMenu();
    void writeResultDatabase(double result);
    void setVolume(int volume);

    //void on_tableView_activated(const QModelIndex &index);

public:
    app(QWidget *parent = nullptr);
    ~app();

private:
    Ui::app *ui;
    QTimer *timer;
    QString login;
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    QMediaPlayer *musicPlayer;
    QAudioOutput *audioOutput;
    double points;
    int count;
    int timeCount;

protected:
    void keyPressEvent(QKeyEvent *event) override;
};

#endif // APP_H
