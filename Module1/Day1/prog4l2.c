#include <stdio.h>
#include <ctype.h>

int getCharType(char c) {
  if (isupper(c)) {
    return 1;
  } else if (islower(c)) {
    return 2;
  } else if (isdigit(c)) {
    return 3;
  } else if (isprint(c)) {
    return 4;
  } else {
    return 5;
  }
}

int main() {
  char c = '!';
  int charType = getCharType(c);
  printf("The character '%c' is of type %d.\n", c, charType);
  return 0;
}
