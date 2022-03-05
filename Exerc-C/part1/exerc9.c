#include <stdio.h>

/*Faça um programa que leia 5 números e informe a soma e a média dos números.*/

int main (void){
    float num1, num2, num3, num4, num5, maior, soma, media;

    printf ("digite 5 numeros: ");
    scanf ("%f%f%f%f%f", &num1, &num2, &num3, &num4, &num5);

    soma = num1 + num2 + num3 + num4 + num5;
    printf ("A soma dos seus numeros eh %.2f \n", soma);

    media = (num1 + num2 + num3 + num4 + num5)/5;
    printf ("A media dos seus numeros eh %.2f \n", media);

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