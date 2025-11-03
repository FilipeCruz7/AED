#include<stdio.h>


//Fazer uma função que faça os prints ou então uma que determine o tamanho dos arrays

int check(int* a, int n){
    int resultado = 0;

    if(a == NULL || n<2){
        return 0;
    }

    for(int i = 1; i < n-1; i++){
        if (a[i] == a[i - 1] + a[i + 1]){
            resultado ++;
        }
    }
    return resultado;
}

int main(void){

    int a1[10] = {1,4,3,1,5,6,2,3,1,10};
    int n = sizeof(a1) / sizeof(a1[0]);

    int resultado = check(a1, n);

    printf("Resultado: %d\n", resultado);

    return 0;
}