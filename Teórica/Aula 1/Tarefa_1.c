#include <stdio.h>
#include <math.h>

int main(void){
    float x;
    float y;
    int operacao;
    char sinal;
    float resultado;

    printf("Escolhe uma operacao: \n 1: +\n 2: -\n 3: *\n 4: / \n");
    scanf("%d", &operacao);

    if (operacao != 1 && operacao != 2 && operacao != 3 && operacao != 4) {
    printf("Ocorreu um erro :(\n");
    return 1;
    }   

    printf("Primeiro numero: \n");
    scanf("%f", &x);

    printf("Segundo numero: \n");
    scanf("%f", &y);

    if (operacao == 1){
        resultado = x + y;
        sinal = '+';
    } 
    else if (operacao == 2){
        resultado = x - y;
        sinal = '-';
    }
    else if (operacao == 3){
        resultado = x * y;
        sinal = '*';
    }
    else if (operacao == 4){
        resultado = x / y;
        sinal = '/';
    }
    else {
        printf("Ocorreu um erro :(");
        return 1;
    }


    printf("%.2f %c %.2f = %.2f\n", x, sinal, y, resultado);


    return 0;
}