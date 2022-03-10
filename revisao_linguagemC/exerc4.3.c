#include <stdio.h>
#include <stdlib.h>

/*4.3 Dado um ano, informe se ele é ou nao bissexto. Observações:

	1) Um ano é bissexto se é divisível por 4 mas não por 100;
	2) se for divisível por 4 e por 100, em também que ser divisivel por 400.
*/

void main(){

	int ano;
	float resto4=0, resto100=0, resto400=0;

	printf("Digite o ano para saber se ele e bissexto: ");
	scanf("%d", &ano);

	//divisivel por 4:
	resto4 = ano % 4;
	resto100 = ano % 100;
	resto400 = ano % 400;

	if (resto4 == 0 && resto100 != 0){
		printf("O ano %d e bissexto", ano);

	}else if(resto4 == 0 && resto100 == 0 && resto400 == 0){
		printf("O ano %d e bissexto", ano);
		
	}else{
		printf("O ano %d nao e bissexto", ano);
	}


}