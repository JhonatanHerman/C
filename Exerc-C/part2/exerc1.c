#include <stdio.h>

int main (void) {
    int vetor[10];

    vetor[0]= 10;
    vetor[1]= 9;
    vetor[2]= 8;
    vetor[3]= 7;
    vetor[4]= 6;
    vetor[5]= 5;
    vetor[6]= 4;
    vetor[7]= 3;
    vetor[8]= 2;
    vetor[9]= 1;


    for (int i=0; i<=9; i++){
        printf ("%d \n", vetor[i]);
    }

    printf ("#############\n");

    for (int i=9; i>=0; i--){
        printf ("%d \n", vetor[i]);
    }



}