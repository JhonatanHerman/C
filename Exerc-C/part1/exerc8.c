#include <stdio.h>

//Faça um programa que leia 5 números e informe o maior número.

int main (void){

    //declaração de variaveis
    float num1, num2, num3, num4, num5, maior;

    printf ("escreva 5 numeros: ");
    scanf ("%f%f%f%f%f", &num1, &num2, &num3, &num4, &num5);

    maior = num1;

    if (num2 > maior){
        maior = num2;
    }
    if (num3 > num2){
        maior = num3;
    }
    if (num4 > num3){
        maior = num4;
    }
    if (num5 > num4){
        maior = num5;
    }

    printf ("seu numero maior eh: %.2f", maior);

}