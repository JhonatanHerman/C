#include <stdio.h>

/*
Faça  um  programa  para  uma  loja  de  tintas.  O  programa  deverá  pedir  o tamanho  em  metros  quadrados  da  área  a  ser  pintada.  
Considere  que  a cobertura da tinta é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00. 
Informe ao usuário a quantidades de latas de tinta a serem compradas e o preço total.
*/

int main (void)
{   
   //declaração de variaveis
    float aream, quantlitrostinta, quantlatas, precototal;

   do{
		printf ("\n\nEscreva o valor da area a ser pintada em metros quadrados: ");
	    scanf ("%f", &aream);
		
		if (aream == 0)
			break;
		
	    printf ("\n\narea a ser pintada em metros quadrados: %.2f", aream);
	
	    //processamento
	    quantlitrostinta = aream / 3;
	    printf ("\nlitros a serem usados: %2.f", quantlitrostinta);
	
	    quantlatas = quantlitrostinta/18;
	    
	    
	    float partInt = (int)quantlatas;
	    float partDecimal = quantlatas - partInt;
	
        if (partDecimal == 0){
        }else if (partDecimal >= 0.5){
	        quantlatas = partInt + 1;
	        precototal = quantlatas * 80;
	    }else{
	        quantlatas = partInt;
	        precototal = (partInt *80) +40;
	        printf ("\nQuantidade de latas de 10L: 1 ");
	    }
	        
		//se >= x.5 recomenda mais uma lata de 18 litros
		//se < x.5 recomenda uma lata de 10 litros com preco de 4
	    printf ("\nquantidade de latas a serem usadas: %2.f", quantlatas);
	    printf ("\npreco total em reais: %2.f", precototal);
  
  	 }while(aream != 0);
  
    
}