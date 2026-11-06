#include "stringMethods.h"
// toUpper
char* toUpper(char* str) {
  for (int i = 0; str[i] != '\0'; ++i) {
    if (str[i] >= 'a' && str[i] <= 'z') {
      str[i] = str[i] - 'a' + 'A';
    }
  }
  return str;
}

// toLower
char* toLower(char* str) {
  for (int i = 0; str[i] != '\0'; ++i) {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      str[i] = str[i] - 'A' + 'a';
    }
  }
  return str;
}

// stringLength
int stringLength(const char* str) {
  int counter = 0;
  while (str[counter] != '\0') {
    counter++;
  }
  return counter;
}

// string compare
int stringCompare(const char* str1, const char* str2) {
  int i = 0;
  while (str1[i] != '\0' && str2[i] != '\0') {
    if (stringLength(str1) != stringLength(str2)) {
      return -1;
    }
    if (str1[i] == ' ' || str2[i] == ' ') {
      i++;
      continue;
    }
    if (str1[i] != str2[i]) {
      return -1;
    }
    i++;
  }
  return 1;
}

// string copy
char* copyString(char* original, char* copy) {
  int counter = 0;
  for (int i = 0; original[i] != '\0'; i++) {
    copy[i] = original[i];
    counter++;
  }
  copy[counter] = '\0';
  return copy;
}