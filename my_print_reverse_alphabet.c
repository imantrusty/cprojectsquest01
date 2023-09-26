#include <stdio.h>
#include <unistd.h> 

void my_print_reverse_alphabet() {
    for (char ch = 'z'; ch >= 'a'; ch--) {
        putchar(ch); 
    }
    putchar('\n');
}

void my_putchar(char c) {
    write(1, &c, 1);
}