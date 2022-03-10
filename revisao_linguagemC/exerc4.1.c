#include <stdio.h>
#include <stdlib.h>


/*4.1 Dados  uma  distância  em  Km  e  o  total  de  litros  de  combustível  gasto  por  um  automóvel  para 
percorrê-la, informe o consumo médio:  
            
            CM = DT / LT 
 
Onde: 
            CM = Consumo Médio 
            DT = Distância percorrida 
            LT = Litros de combustível gasto 
 
Observação: Apresente o resultado com 3 casas decimais de precisão. */



void main (){
    float cm, dt, lt;

    printf("Qual a distancia total percorrida em KM? ");
    printf("\nR: ");
    scanf("%f", &dt);

    printf("Qual o total de listros de combustivel gasto? ");
    printf("\nR: ");
    scanf("%f", &lt);
    
    cm = dt / lt;   

    printf("\n\nO consumo medio foi: %.3f KM/L", cm); 

    
}
