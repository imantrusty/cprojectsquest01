#include <stdio.h>
#include <ctype.h>

int my_islower(char ch) {

    if(islower(ch) ) {
        return 1;
    } else {
        return 0;
    }
}