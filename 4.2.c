#include <stdio.h>
#include <stdlib.h>

int soma(int n1, int n2);
int somaP (int *n1, int *n2);
int multi(int n1, int n2);
int multiP(int *n1, int *n2);


void main(){
    int n1, n2;

    n1 = 10;
    n2 = 30;

    printf("A soma dos numeros por parametro: %d",soma(n1, n2));
    printf("\n\nPor referencia de parametro ponteiros: %d", somaP(&n1, &n2));


    printf("\n\nA multiplicacao dos numeros por parametro: %d",multi(n1, n2));
    printf("\n\nPor referencia de parametro ponteiros: %d", multiP(&n1, &n2));
}


int soma(int n1, int n2){
    return n1 + n2;
}

int somaP (int *n1, int *n2){
    return *n1 + *n2;
}

int multi(int n1, int n2){
    return n1 * n2;
}

int multiP(int *n1, int *n2){
    return *n1 * *n2;
}
