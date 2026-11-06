#include <iostream>

#include "stringMethods.h"
// toupper
// tolower
// stringcompare
// stringcopy
int main() {
  char str[] = "Hello, World!";
  std::cout << "Uppercase string: " << toUpper(str) << std::endl;

  char str2[] = "Hello, World!";
  std::cout << "Lowercase string: " << toLower(str2) << std::endl;
  std::cout << "Length of string: " << stringLength(str) << std::endl;
  char FristStringToCompare[] = "Hello, World!";
  char secondStringToCompare[] = "Hello, !World";

  std::cout << "String comparison: "
            << stringCompare(FristStringToCompare, secondStringToCompare)
            << std::endl;

  char original[] = "Hello, World!";
  char copy[] = "";
  copyString(original, copy);
  std::cout << "Copied string: " << copy << std::endl;
  return 0;
}