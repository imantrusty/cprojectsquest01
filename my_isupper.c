#include <stdio.h>
#include <ctype.h>

int my_isupper(char ch) {
    //char ch = 'T';

    if(isupper(ch) ){
        return 1;
    } else {
        return 0;
    }
}