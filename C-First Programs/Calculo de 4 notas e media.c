#include<stdio.h>
#include<stdlib.h>

/*
Faça um Programa que peça as 4 notas bimestrais e mostre a média.
*/




int main (void)
{
    //Declaração das variáveis
    int nota1, nota2, nota3, nota4, media;

    //Entrada de dados
    printf ("Digite a primeira nota do aluno: ");
    scanf ("%i", &nota1);

    printf ("Digite a segunda nota do aluno: ");
    scanf ("%i", &nota2);

    printf ("Digite a terceira nota do aluno: ");
    scanf ("%i", &nota3);

    printf ("Digite a quarta nota do aluno: ");
    scanf ("%i", &nota4);

    //Processamento
    media = (nota1 + nota2 + nota3 + nota4) / 4;

    //saída
    printf ("Media do aluno = %i\n\n",media);

    system ("pause"); // pausa da tela somente para Windows
    return 0; //retorno da função main
}