#include <stdio.h>
#include <stdlib.h>

/*
Faça um Programa que peça a idade 
e a altura de 5 pessoas, armazene cada informação no seu respectivo vetor. 
Imprima a idade e  a altura na ordem inversa a ordem lida.
*/


int main (void){
    int P = 2;
    float vetoridade[P], vetoraltura[P];

    for(int i=0; i<P; i++){
        
        printf("Digite a idade da pessoa %d: ", (i+1));
        scanf("%f", &vetoridade[i]);

        printf("Digite a altura da pessoa %d: ", (i+1));
        scanf("%f", &vetoraltura[i]);

    }

    for(int i=(P-1); i>=0; i--){
        printf("\n\nIdade da pessoa %d: %.2f\n", (i+1), vetoridade[i]);
        printf("Altura da pessoa %d: %.2f\n", (i+1), vetoraltura[i]);

    }


}