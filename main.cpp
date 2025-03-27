#include "app.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QGuiApplication>

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
    w.show();
    return a.exec();
}
