#include<stdio.h>

long unsigned int D(unsigned int m, unsigned int n){
    unsigned int res = 0;
    if (m == 0 || n == 0) {res = 1;}

//D(m, n) = D(m – 1, n) + D(m – 1, n – 1) + D(m, n – 1) 

    else {res = D(m-1,n) + D(m-1,n-1) + D(m,n-1);}
    return res;
}

int main (void){
    int rows = 10;
    int cols = 10;

    printf("Delannoy's Matrix - Recursive Function\n\n");

    for (int i = 0; i <= rows; i++) {
        for (int j = 0; j <= cols; j++) {
            printf("%lu\t", D(i, j));
        }
        printf("\n");
    }

    return 0;
}
