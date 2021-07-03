#include <stdlib.h>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

#define LOG(msg)                                                           \
  std::stringstream ss;                                                    \
  std::string str_out;                                                     \
  ss << "[" << __FILE__ << ":" << __FUNCTION__ << ":" << __LINE__ << "]";  \
  ss >> str_out;                                                           \
  std::cout << std::setw(50) << std::setfill(' ') << std::left << str_out; \
  std::cout << msg << std::endl;
