#include <stdio.h>
#include <stdlib.h>

float AritSimples(float n1, float n2, float n3);
float MediaPond(float n1, float n2, float n3);
float AritSimplesP(float *n1, float *n2, float *n3);
float MediaPondP(float *n1, float *n2, float *n3);

void main(){
    float n1, n2, n3;

    n1 = 5;
    n2 = 3;
    n3 = 5.5;

    printf("Resultado Aritmetica simples: %.1f",AritSimples(n1, n2, n3));
    printf("\n\nResultado Ponderada: %.1f", MediaPond(n1, n2, n3));

    printf("\n\nResultado Aritmetica simples por referencia: %2.f", AritSimplesP(&n1, &n2, &n3));
    printf("\n\nResultado Ponderada por referencia: %2.f", MediaPondP(&n1, &n2, &n3));
}

float AritSimples(float n1, float n2, float n3){
    return (n1 + n2 + n3)/3;
}

float AritSimplesP(float *n1, float *n2, float *n3){ //PONTEIRO
    return (*n1 + *n2 + *n3)/3;
}

float MediaPond(float n1, float n2, float n3){
    return ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;
}

float MediaPondP(float *n1, float *n2, float *n3){ //PONTEIRO
    return ((*n1 * 2) + (*n2 * 3) + (*n3 * 5)) / 10;
}