#include <stdio.h>


//Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.

void main (){

    //declaração de variaveis
    float numero;
    
    //entrada de dados
    printf ("escreva um numero positivo ou negativo: ");
    scanf ("%f", &numero);


    //condição
    if (numero > 0){
        printf ("seu numero eh POSITIVO");


    }else{
        printf ("seu numero eh NEGATIVO");


    }

}