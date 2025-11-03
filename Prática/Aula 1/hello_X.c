#include <stdio.h>

int main( void )
{
    char name[50];

    puts("What is your name?");

    gets(name);

    printf("Hello %s!\n", name);
    
    return 0;
}   