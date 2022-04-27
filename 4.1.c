#include <stdio.h>
#include <stdlib.h>

float AritSimples(float n1, float n2, float n3);
float MediaPond(float n1, float n2, float n3);

void main(){
    float n1, n2, n3;

    n1 = 10;
    n2 = 5;
    n3 = 7;

    printf("Resultado Aritmetica simples: %2.f",AritSimples(n1, n2, n3));
    printf("\n\nResultado Ponderada: %2.f", MediaPond(n1, n2, n3));

}

float AritSimples(float n1, float n2, float n3){
    float result;

    result = (n1 + n2 + n3)/3;

    return result;

}

float MediaPond(float n1, float n2, float n3){
    float result2;

    result2 = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;

    return result2;
}