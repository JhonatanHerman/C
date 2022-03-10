#include <stdio.h>
#include <stdlib.h>

/*ado um valor n, exiba uma contagem regressiva do valor até atingir zero.  
 
Por exemplo: n = 10, resultado = 10 9 8 7 6 5 4 3 2 1 0 
 
Observação: Utilizar o comando de repetição for*/

void main(){

	int n, j;

	printf("Digite um numero inteiro: ");
	scanf("%d", &n);

	printf("\nContagem regressiva: \n\n");
	j = n;

	for (int i=0; i<=n; i++){
		printf("%d\n", j-- );
	} 
}