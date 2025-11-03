#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>

int main(void){
    float menor;
    printf("Menor angulo: ");
    scanf("%f", &menor);

    float maior;
    printf("Maior angulo: ");
    scanf("%f", &maior);

    float intervalo;
    printf("Intervalo: ");
    scanf("%f", &intervalo);

    FILE *arquivo = fopen("tabela.txt", "w");



    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }

    fprintf(arquivo, "ang\t\tsin(ang)\tcos(ang)\n");
    fprintf(arquivo, "------------------------------------\n");



    //ang sin(ang)      cos(ang)        
    //--- ------------- -------------   
    printf("ang\tsin(ang)\tcos(ang)\n");
    printf("------------------------------------\n");

    for(float ang = menor; ang <= maior; ang += intervalo){
        float radianos;
        radianos = ang * (M_PI/180);
        float seno;
        seno = sin(radianos);
        float cosseno;
        cosseno = cos(radianos);

        printf("%.2f\t%.4f\t\t%.4f\n", ang, seno, cosseno);

        fprintf(arquivo, "%.2f\t%.4f\t%.4f\n", ang, seno, cosseno);
  
    }


    fclose(arquivo); // fecha o arquivo
    printf("\nTabela salva\n");

    return 0;
}