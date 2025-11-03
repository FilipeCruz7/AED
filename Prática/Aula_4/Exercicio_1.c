#include<stdio.h>

//array [i] = array [i – 1] + array [i + 1], para 0 < i < (n – 1)

int check(int* a, int n){
    if (a == NULL || n <= 2) return 0; // nenhum elemento com vizinhos dos dois lados

    int count = 0;
    for (int i = 1; i < n-1; i++){
        if (a[i] == a[i-1] + a[i+1]){
            count++;
        }
    }
    return count;
}

int main(void){

    int a1[10] = {1,4,3,1,5,6,2,3,1,10};

    int n = sizeof(a1) / sizeof(a1[0]);
    int resultado = check(a1, n);
    int comparacoes = (n > 2) ? (n - 2) : 0; // para cada i de 1 a n-2 é feita uma comparação

    printf("Resultado: %d\n", resultado);
    printf("N\u00ba de comparacoes: %d\n", comparacoes);

    return 0;
}