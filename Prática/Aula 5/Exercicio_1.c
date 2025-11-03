#include<stdio.h>

unsigned int chamadas = 0;

unsigned int T1(unsigned int n){
    chamadas ++;
    if (n==1) {
        return 1;
    } else {
        return T1(n/2) + n; 
    }

}


int main(void){
    unsigned int n;
    printf("n? ");
    scanf("%u", &n);

    unsigned int resultado = T1(n);

    printf("T(%u) = %u, Numero de chamadas recursivas: %u", n, resultado, chamadas);

    return 0;
}