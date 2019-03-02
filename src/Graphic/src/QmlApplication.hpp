#ifndef QMLAPPLICATION_HPP
#define QMLAPPLICATION_HPP

#include <QObject>

namespace Graphic {

class QmlApplication : public QObject
{
  Q_OBJECT
public:
  QmlApplication(QObject *parent = nullptr);

  Q_INVOKABLE QString getHelloText();

};

} // namespace

#endif // QMLAPPLICATION_HPP
