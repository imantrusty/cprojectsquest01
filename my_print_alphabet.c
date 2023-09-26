#include <stdio.h>
#include <unistd.h> 

void my_print_alphabet() {
    for (char ch = 'a'; ch <= 'z'; ch++) {
        putchar(ch); 
    }
    putchar('\n');
}

void my_putchar(char c) {
    write(1, &c, 1);
}