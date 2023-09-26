//isalpha function checks whether a character is an alphabet (a to z and A-Z) or not.
#include <stdio.h>

int my_isalpha(int c) {
  if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
    return 1; // Character is a letter
  } else {
    return 0; // Character is not a letter
  }
}

/*
int main() {
  char ch1 = 'A';
  char ch2 = '7';

  printf("%c is alphabetic: %d\n", ch1, my_isalpha(ch1));
  printf("%c is alphabetic: %d\n", ch2, my_isalpha(ch2));

  return 0;
}

*/