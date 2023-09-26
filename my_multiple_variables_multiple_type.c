#include <stdio.h>

int main() {
  int age = 34;
  const char *name = "Luke";
  char string = ',';

  printf("Hello %s%c I'm %d years old.\n", name, string, age);
  return 0;
}