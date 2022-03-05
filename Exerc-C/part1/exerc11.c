#include <stdio.h>

/*
Faça um programa que receba dois números inteiros e gere os 
números inteiros que estão no intervalo compreendido por eles.
*/


int main (void){
    int num1, num2,numMaior, i;

    printf ("Digite um numero: ");
    scanf ("%d", &num1);

    printf ("Digite outro numero: ");
    scanf ("%d", &num2);

    if (num1 > num2){
        numMaior = num1;
        num1 = num2;
        num2 = numMaior;
    }
    
    
    
    for (int i= (num1+ 1); i<num2; i= i + 1){
        printf ("%d \n", i);

    }

    printf ("########################### \n");

    for (int i=(num2 - 1); i>num1; i= i - 1){
        printf ("%d \n", i);

    }
}
