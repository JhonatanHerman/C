#include <stdio.h>
#include <stdlib.h>

int main(void){
    //criando variaveis
    int numeros[20], pares[20] , impares[20];
    int i, j = 0, k = 0;
    printf ("Escreva 20 numeros inteiros: \n");

    //pedindo os numeros
    for (i=0; i < 20; i++){
        printf ("numero %d: ", (i+1));
        scanf ("%d", &numeros[i]);
    }
    for (i=0; i < 5; i++){
        printf ("%d \0", numeros[i]);
    }
    

    //definindo se é par ou impar
    for (i=0; i < 20; i++){
        if(numeros[i] % 2 == 0){
            pares[k] = numeros[i];
            k++;
        }else{
            impares[j] = numeros[i];
            j++;
        }
    }

    //escrevendo na tela numeros impares e pares:
    printf ("\nPares: ");
    for (i=0; i < k; i++){
        printf ("%d, ", pares[i]);
    }
    

    printf ("\nImpares: ");
    for (i=0; i < j; i++){
        printf ("%d, ", impares[i]);
    }
}