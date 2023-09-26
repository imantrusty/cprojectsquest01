#include <stdio.h>
// function will printf("detonation in... %d secondes.\n", seconds_left);

int main() {
 int timer = 10;

  while (timer > 0) {
    printf("detonation in... %d seconds./n", timer);
    --timer;
  }
  return 0;
}