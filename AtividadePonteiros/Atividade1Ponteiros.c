#include <stdio.h>
#include <stdlib.h>
#include "Troca.h"

/*Crie um projeto chamado Atividade1Ponteiros que faça o seguinte:

Leia 3 valores A, B e C quaisquer do tipo inteiro.

Faça uma função, utilizando ponteiros, que troque entre si os valores de forma que no final A contenha o maior valor, B, o valor intermediário e C, o menor valor.
Exemplo:

    ENTRADA: A  = 5, B = 2, C = 10

    RETORNO A = 10, B = 5, C = 2
                 
*/



//funçao main
int main(void){
    int a, b, c;

    //Entrada
    a = 5;
    b = 2;
    c = 10;

    printf("Valores antes da troca: ");
    printf("\nA: %d", a);
    printf("\nB: %d", b);
    printf("\nC: %d", c);

    //Realização da troca:
    Troca(&a,&b,&c);

    //Saida
    printf("\n\nValores depois da troca: ");
    printf("\nA: %d", a);
    printf("\nB: %d", b);
    printf("\nC: %d\n\n", c);


}

