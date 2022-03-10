#include <stdio.h>
#include <stdlib.h>

/*A  série  de  Fibonacci  corresponde  a  uma  sequência  numérica  como:  1,  1,  2,  3,  5,  8,  13,  21,  34, 
55,  ...  onde  os  dois  primeiros  termos  são  iguais a  1  e,  a  partir  do terceiro,  o termo  é  dado  pela 
soma dos dois termos anteriores.  
 
Dado  um  número  n  >=  3,  exiba  os  números  da  série  de  Fibonacci  até  n  ou  ao  termo  da  série 
menor que n. 
 
Por exemplo:  
 
n = 21, resultado = 1, 1, 2, 3, 5, 8, 13, 21 
n = 20, resultado = 1, 1, 2, 3, 5, 8, 13 
 
Observação: Utilizar o comando de repetição while*/

void main(){
	int soma=1, n, fib1=1, fib2=1; 

	printf("Digite um numero maior ou igual a 3 para ver a sequencia de fibonacci ate ele:  ");
	scanf("%d", &n);

	
	while(soma <= n){
		printf("%d ", soma);
		
		soma = fib1 + fib2;
		fib1 = fib2;
		fib2 = soma;
		
	}

}