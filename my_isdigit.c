#include <stdio.h>
#include <ctype.h>

int my_isdigit(char c)
{

if (isdigit(c))
{
    //printf("%c is a digit\n", c);
    
    return 1;
}
else 
{
    return 0;
   // printf("%c is not a digit\n", c);
}

}
/*
int main()
{
    char c = '7';
    my_isdigit(c);

    return 0;
}
*/