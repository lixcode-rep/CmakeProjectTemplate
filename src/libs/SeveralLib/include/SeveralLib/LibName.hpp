#ifndef SEVERAL_LIB_HPP
#define SEVERAL_LIB_HPP

#include "severallib_export.h"

#include <string>

namespace SeveralLib {

class SEVERALLIB_EXPORT LibCore
{
public:
  LibCore();

  std::string getHelloText();

};

} // namespace

#endif // SEVERAL_LIB_HPP
