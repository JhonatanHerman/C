#include <stdio.h>

/* Faça um programa que peça uma nota, entre zero e dez. 
Mostre uma mensagem caso o valor seja inválido e continue 
pedindo até que o usuário informe um valor válido.
*/

int main (void){
    float nota;
        
    printf ("Digite uma nota entre 0 a 10: ");
    scanf ("%f", &nota);
    
    do{
        
    
        if (nota > 10 || nota < 0){
            printf ("VALOR INVALIDO, DIGITE OUTRO NUMERO: ");
            scanf ("%f", &nota);
            //printf ("sua nota eh: %.1f \n", nota);
        }
        
    }while (nota > 10 || nota < 0);

    printf ("sua nota eh: %.1f \n", nota);
}