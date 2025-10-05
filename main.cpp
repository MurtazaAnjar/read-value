#include <iostream>

#include "src/readValue.h"

int main() {
  std::cout << readValue(1,10,"Please enter a value...", "Invalid value...") << std::endl;
  return 0;
}
