#include <iostream>
#include "config.h"

#ifdef USE_MATH
  #include "add.h"
#endif

int main() {

#ifdef USE_MATH
  std::cout << add(1, 2) << std::endl;
#endif
}

