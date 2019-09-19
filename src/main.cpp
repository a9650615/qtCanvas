#include <QApplication>
#include <QQmlApplicationEngine>
#include <QtQml>
#include <QtGui/QGuiApplication>
#include "colorMarker.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    // load custom c++ module
    qmlRegisterType<ColorMarker>("io.qt.colormarker", 1, 0, "ColorMarker");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));


    return app.exec();
}

