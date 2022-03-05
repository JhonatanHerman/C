#include <stdio.h>
#include <stdlib.h>

/*Faça um Programa que leia dois vetores com 10 elementos cada. 
Gere um terceiro vetor de 20 elementos, cujos valores deverão ser compostos 
pelos elementos intercalados dos dois outros vetores.
*/


int main(void){
    int tmn=10;
    int vetor1[tmn], vetor2[tmn], vetor3[tmn*2];
    
    printf("Digite 10 elementos para o vetor 1: \n");

    for(int i=0; i<tmn; i++){
        printf("Digite o elemento %d: ", (i+1));
        scanf("%d", &vetor1[i]);

    }
    printf("Digite 10 elementos para o vetor 2: \n");
    for(int i=0; i<tmn; i++){
        printf("Digite o elemento %d: ", (i+1));
        scanf("%d", &vetor2[i]);

    }
    
    for(int i=0; i<tmn; i++){
        vetor3[i] = vetor1[i];
    }
    for(int i=0; i<tmn; i++){
        vetor3[i+tmn] = vetor2[i];
    }

    for(int i=0; i<(tmn*2); i++){
        printf("%d \0", vetor3[i]);

    }
    
}