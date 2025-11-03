#include<stdio.h>

int NUM_COMPS;

void printArray(int* a, int n){
    int i;

    for (i = 0; i < n; i++){
        printf("%4d ", a[i]);
    }
    printf("\n");
}

int check(int* a, int n){
    assert(n < 2);

    int result = 0;

    for (int i = 1; i < (n-1); i++){
        if (a[i] == (a[i-1] + a[i+1])) {
            result ++;
        }

        NUM_COMPS++;
    }

    return result;
}

int main(void) {
    int r;

    //Tem mais aqui no meio

    return 0;
}