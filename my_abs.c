#include <stdio.h>
#include <stdlib.h>

int my_abs(int param_1) {
     if (param_1 < 0) {
         return -param_1;
     } else {
         return param_1;
     }
}

int hello() {
    int number = -30;
    int absolute = my_abs(number);
    printf("The absolute value of %d is %d\n", number, absolute);
    return 0;
}
