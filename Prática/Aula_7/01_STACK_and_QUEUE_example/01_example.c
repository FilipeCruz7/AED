//
// TO DO : desenvolva um algoritmo para verificar se um numero inteiro positivo
//         e uma capicua
//         Exemplos: 12321 e uma capiacua, mas 123456 nao e
//         USE uma PILHA DE INTEIROS (STACK) e uma FILA DE INTEIROS (QUEUE)
//
// TO DO : design an algorithm to check if the digits of a positive decimal
//         integer number constitue a palindrome
//         Examples: 12321 is a palindrome, but 123456 is not
//         USE a STACK of integers and a QUEUE of integers
//

#include <stdio.h>

#include "IntegersQueue.h"
#include "IntegersStack.h"

int main(void) {  
    long unsigned int n;
    printf("Escreve um numero positivo inteiro: ");
    scanf("%lu", &n);


    //Criar a STACK e a QUEUE
    Stack* stack = StackCreate(20);               
    Queue* queue = QueueCreate(20);

    int digit; 

    while (n != 0){
        digit = n % 10;
        n /= 10;

        StackPush(stack, digit);          
        QueueEnqueue(queue, digit);

    }
    unsigned int check=0;
    while (!StackIsEmpty(stack)){
        if (StackPeek(stack) != QueuePeek(queue)){
            printf("Não é uma capicua\n");
            check = 1;
            break;
        }

        StackPop(stack);
        QueueDequeue(queue);
    }

    if (check==0){
        printf("É uma capicua");
    }

    QueueDestroy(&queue);
    StackDestroy(&stack);

    return 0; 
}