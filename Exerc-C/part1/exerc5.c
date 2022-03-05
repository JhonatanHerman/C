#include <stdio.h>


//Faça um Programa que peça dois números e imprima o maior deles.

void main (){

    //declaração de variaveis
    float num1, num2;
    
    do{
        
        //entrada de dados
        printf ("\n\nescreva um numero qualquer: ");
        scanf ("%f", &num1);

        printf ("escreva outro numero qualquer: ");
        scanf ("%f", &num2);

        if (num1 == num2){
            break;
        }


        //condições
        if (num1 > num2){
            printf ("\nseu numero maior eh: %.2f", num1);

        }else{
            printf ("\nseu numero maior eh: %.2f", num2);
        }
    
    
    
    }while (num1 > num2 || num2 > num1);
    
}