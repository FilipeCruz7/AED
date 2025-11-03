#include <stdio.h>

int main(void){

    int m = 11;
    int n = 3;
    int result = m + n / 2;

    printf("%d\n", result); //Output: 12


    result = 2 * m + n;

    printf("%d\n", result); //Output: 25

    return 0;
}