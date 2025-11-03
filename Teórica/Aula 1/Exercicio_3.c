#include <stdio.h>
#include<math.h>

int main(void){

    double x = 10.45;
    double y = 3.95;

    printf("%f\n", floor(x)); //Output: 10.000000
    printf("%f\n", ceil(x));  //Output: 11.000000
    printf("%f\n", floor(y)); //Output: 3.000000
    printf("%f\n", ceil(y));  //Output: 4.000000

    return 0;
}