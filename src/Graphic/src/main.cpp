#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "QmlApplication.hpp"

int main(int argc, char *argv[])
{
  QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
  QGuiApplication app(argc, argv);
  QQmlApplicationEngine engine;

  Graphic::QmlApplication qmlApp;
  engine.rootContext()->setContextProperty("app", &qmlApp);

  engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
  if (engine.rootObjects().isEmpty())
    return -1;

  return app.exec();
}
