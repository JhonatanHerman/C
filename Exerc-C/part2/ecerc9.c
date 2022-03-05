#include <stdio.h>
#include <stdlib.h>

int main(void){
    char meses[12][10] = {"janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
    float tempmes[12], mediaanual = 0, soma = 0;

    for(int i=0; i<12; i++){
        printf("Digite a temperatura do mes %s: ", meses[i]);
        scanf("%f", &tempmes[i]);
        soma += tempmes[i];
    }
    mediaanual = soma/12;

    printf("\nMESES COM A TEMEPRATURA ACIMA DA MEDIA ANUAL:\n");
    for(int i=0; i<12; i++){
        if(tempmes[i] > mediaanual){
            printf("Mes %s com temperatura de %.2f\n", meses[i], tempmes[i]);
        }
    }  

}