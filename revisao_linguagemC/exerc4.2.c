#include <stdio.h>
#include <stdlib.h>

/*Dada uma temperatura em graus Fahrenheit, informe o valor correspondente em graus Celsius.  
 
Fórmula:   
 
C = (F – 32) * (5 / 9)   
 
Onde:  
 
C = Temperatura em graus Celsius  
F = Temperatura em graus Fahrenheit */


void main(){
	float C, F;

	printf("Digite a temperatura em graus Fahrenheit: ");
	scanf("%f", &F);

	C = (F - 32) * 5/9;

	printf("A temperatura em Celsius e: %.2f C°", C);

}