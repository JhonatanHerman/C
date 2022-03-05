#include <stdio.h>

/*
Altere o programa anterior para mostrar no final a soma dos números.
*/


int main (void){
    int num1, num2,numMaior, i, soma1, soma2;
    soma1 = 0;
    soma2 = 0;

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
        soma1 = soma1 + i;

    }
    printf ("A soma dos seus numeros eh: %d\n", soma1);

    printf ("########################### \n");

    for (int i=(num2 - 1); i>num1; i= i - 1){
        printf ("%d \n", i);
        soma2 = soma2 + i;

    }
    printf ("A soma dos seus numeros eh: %d\n", soma2);
}


