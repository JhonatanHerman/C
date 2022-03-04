#include<stdio.h>
#include<stdlib.h>

/*
Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário
*/

int main (void)
{
    //Declaração de Variaveis
    int ganho, horas, salario;

    //Entrada de dados
    printf ("Quantos reais voce ganha por hora? ");
    scanf ("%i", &ganho);

    printf ("quantas horas voce trabalha no mes? ");
    scanf ("%i", &horas);

    //Processamento
    salario = (ganho * horas);

    //saída
    printf ("Salario = %i\n\n", salario);

    system ("pause");
    return 0;
}