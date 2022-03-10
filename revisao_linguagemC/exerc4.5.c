#include <stdio.h>
#include <stdlib.h>

/*O  perfil  de  uma  pessoa pode  ser  determinado  a  partir  da  sua  data  de  nascimento,  conforme 
exemplificado a seguir. Dada uma data de nascimento, entrando com Dia, Mês e Ano, apresente 
como saída o perfil correspondente.

Observação: Utilizar comandos para estrutura de decisão múltipla (switch...case) */

void main(){
	int dia, mes, ano, juntar, inteiro, resto, soma, div;

	printf("Digite a sua data de nascimento para saber seu perfil: \n");
	printf("Dia: ");
	scanf("%d", &dia);

	printf("Mes: ");
	scanf("%d", &mes);

	printf("Ano: ");
	scanf("%d", &ano);


	//concatenando dia com mes
	juntar = dia *100 + mes;

	//somando (dia/mes) com ano	
	soma = juntar + ano;

	//separando o inteiro da soma de juntar + ano
	inteiro = soma / 100;	
	resto  = soma % 100;

	//soma do inteiro + resto, reut var soma
	soma = inteiro + resto;

	//decisao pelo resto
	div = soma % 5;


	printf("\n\nResultado: \n");
	switch (div){
		case 0:
			printf("Timido");
			break;

		case 1:
			printf("Sonhador");
			break;

		case 2:
			printf("Paquerador");
			break;

		case 3:
			printf("Atraente");
			break;

		case 4: 
			printf("Irresistivel");
			break;

		default:
			break;
	}



}