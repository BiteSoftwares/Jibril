#include "../Include/IntToStr.h"

#include <string>
#include <sstream>

std::string IntToStr(int i)
{
     std::ostringstream oss;
     oss << i;
     return oss.str();
}
