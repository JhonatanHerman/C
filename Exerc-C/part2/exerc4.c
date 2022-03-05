#include <stdio.h>
#include <stdlib.h>
/*
Faça  um  Programa  que  peça  as  quatro  notas  de  10  alunos,  calcule  e
armazene num vetor a média de cada aluno, imprima o número de alunos com média maior ou igual a 7.0.
*/

int main(void){
    float soma=0, notas=0, media=0;
    int qtdA = 2, i, d, vetormedia[qtdA];

    for (d=0; d<qtdA; i++){
        printf("\ndigite a media do aluno %d: \n", (d+1));
        d++;
        for (i=0; i<4; i++){
            printf("nota %d:", (i+1));
            scanf("%f", &notas);
        
            soma = soma + notas;
            media = soma/4;
            
            
            
        }   
        printf("media do aluno %d eh %.2f:\n", d, media);
        soma = 0;
        media = 0;
        vetormedia[d] = media;
        
        
         
    }
    
    for(i=0; i<d; i++){
        if(vetormedia[i] >=7){
            printf("\n\nalunos media maior que 7: %d \n\n\n\n", (i+1));

        }
    }        
            
            
    
}