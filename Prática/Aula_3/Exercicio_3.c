#include<stdio.h>

int main(void){
    int potencias[10];

    for(unsigned int i = 0; i < 10; i++){
        potencias[i] = i * i * i;
    }

    for(unsigned int x = 1; x <= 9; x++){
        for(unsigned int y = 0; y <= 9; y++){
            for(unsigned int z = 0; z <= 9; z++){
                int numero = 100*x + 10*y + z;
                int soma = potencias[x] + potencias[y] + potencias[z];

                if (numero == soma){
                    printf("%d\n", numero);
                }

            }
        }
    }

    return 0;
}