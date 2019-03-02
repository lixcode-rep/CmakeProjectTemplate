#include "QmlApplication.hpp"

#include <SeveralLib/LibName.hpp>

namespace Graphic {

QmlApplication::QmlApplication(QObject *parent)
  : QObject (parent)
{}

QString QmlApplication::getHelloText()
{
  SeveralLib::LibCore obj;
  return obj.getHelloText().data();
}

} // namespace
