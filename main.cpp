#include "app.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QGuiApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QGuiApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "KeyboardTrainer_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    app w;

    w.setWindowTitle("Keyboard Trainer");
    w.setWindowIcon(QIcon("C:/SoftwareEngineering/Project/KeyboardTrainer/images/icon/keyboard-100.png"));

    w.show();
    return a.exec();
}
