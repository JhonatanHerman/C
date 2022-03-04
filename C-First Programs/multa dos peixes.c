#include<stdio.h>
#include<stdlib.h>

/*
João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário de seu trabalho. 
Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de São Paulo 
(50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente. João precisa que você faça um programa que leia a variável peso
(peso de peixes) e calcule o excesso. Gravar na variável excesso a quantidade de quilos além do limite e na variável multa 
o valor da multa que João deverá pagar. Imprima os dados do programa com as mensagens adequadas.
*/


int main (void)
{
    
    //declaração das variaveis
    int peso, excesso, multa;

    //Entrada de dados
    printf ("peso de peixes: ");
    scanf ("%i", &peso);
    
    //Calculo do excesso
    excesso = (peso - 50);
    printf ("excesso: %i\n\n", excesso);
    
    //Calculo da multa
    multa = (excesso * 4);
    printf ("multa: %i\n\n", multa);
    
    
    

    system ("pause"); // pausa da tela somente para Windows
    return 0; //retorno da função main
    
}