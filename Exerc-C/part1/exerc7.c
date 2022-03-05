#include <stdio.h>


/*
Faça um Programa que peça um número inteiro e determine se ele é par ou impar. 
Dica: utilize o operador módulo (resto da divisão).
*/

int main (void){
    //declaração de variaveis
    int numero, resto;
    
    

    //entrada de dados
    printf ("\n\nEscreva um numero inteiro: ");
    scanf ("%d", &numero);

        


    resto = numero % 2;

    if (resto == 0){
        printf ("seu numero eh PAR");

    }else{
        printf ("seu numero eh IMPAR");
    }          
}