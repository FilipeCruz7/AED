#include<stdio.h>
#include<math.h>

int main(void){

    int n;

    printf("Quantos numeros?\n");

    scanf("%d", &n);

    printf("Numero\tQuadrado\tRaiz\n");
    printf("-------------------------------------\n");

    for(int i = 1; i <= n; i++){
        float raiz; 
        raiz = sqrt(i);

        float quadrado;
        quadrado = i*i;
        printf("%d\t%.4f\t\t%.4f\n", i, quadrado, raiz);

    }

    return 0;
}