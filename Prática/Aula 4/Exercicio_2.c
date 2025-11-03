#include<stdio.h>
#include <assert.h>

int NUM_OPS;

int check(int*a, int n){
    assert(n > 2);
    NUM_OPS = 0;

    float r = a[1]/a[0];
    NUM_OPS++;

    for (int i = 2; i < n; i++){
        NUM_OPS++;
        if (a[i] != r * a[i - 1] ) {
            return 0;
        }

    }
    return 1;

}

int main (void) {
    int n = 10;
    int a1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a2[10] = {1, 2, 4, 4, 5, 6, 7, 8, 9, 10};
    int a3[10] = {1, 2, 4, 8, 5, 6, 7, 8, 9, 10};
    int a4[10] = {1, 2, 4, 8, 16, 6, 7, 8, 9, 10};
    int a5[10] = {1, 2, 4, 8, 16, 32, 7, 8, 9, 10};
    int a6[10] = {1, 2, 4, 8, 16, 32, 64, 8, 9, 10};
    int a7[10] = {1, 2, 4, 8, 16, 32, 64, 128, 9, 10};
    int a8[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 10};
    int a9[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

    
    int resultado = check(a1,n);
    printf("Resultado (a1) -> %d NUM_OPS: %d\n",resultado, NUM_OPS);
    resultado = check(a2,n);
    printf("Resultado (a2) -> %d NUM_OPS: %d\n",resultado, NUM_OPS);
    resultado = check(a3,n);
    printf("Resultado (a3) -> %d NUM_OPS: %d\n",resultado, NUM_OPS);
    resultado = check(a4,n);
    printf("Resultado (a4) -> %d NUM_OPS: %d\n",resultado, NUM_OPS);
    resultado = check(a5,n);
    printf("Resultado (a5) -> %d NUM_OPS: %d\n",resultado, NUM_OPS);
    resultado = check(a6,n);
    printf("Resultado (a6) -> %d NUM_OPS: %d\n",resultado, NUM_OPS);
    resultado = check(a7,n);
    printf("Resultado (a7) -> %d NUM_OPS: %d\n",resultado, NUM_OPS);
    resultado = check(a8,n);
    printf("Resultado (a8) -> %d NUM_OPS: %d\n",resultado, NUM_OPS);
    resultado = check(a9,n);
    printf("Resultado (a9) -> %d NUM_OPS: %d\n",resultado, NUM_OPS);

    return 0;
}