#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "boost/algorithm/string.hpp"
#include "boost/algorithm/string/trim_all.hpp"

int main(int argc, char **argv) {
  std::string hello = "  Hi~   ";
  boost::algorithm::trim(hello);
  std::cout << hello << std::endl;
  return 0;
}
