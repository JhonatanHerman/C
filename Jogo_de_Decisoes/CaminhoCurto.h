#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include "DecisaoLongo.h"



//CAMINHO CURTO FINAL 1/5

void curto (int item, int *vet){
  int dado;
  int pular;

  //INTRODÇÃO CAMINHO CURTO
  type_text("Depois de um tempo caminhando Eustacio entra no beco que corta o caminho, ve que a escada que conhecia estava interditada por conta de um deslizamento que aconteceu recentemente, ele olha no relogio e sao 7:18, porem ele visualiza uma grade relativamente alta e entao pensa que e possivel pular por cima dela. ",30);
  
  clear();

  //PULAR A GRADE OU VOLTAR LONGO, ESCOLHA
  type_text("Voce deseja pular a grade ou voltar e ir pelo caminho longo?\n\n0 = Pular a grade \n1 = Voltar e tentar ir pelo caminho longo \n2 - Tirar a sorte nos dados\n\n\nR: ", 30);
  scanf("%d", &pular);
  vet[2] = pular;
  
  if (pular == 2){ //ALEATORIO PULAR OU NAO
    srand( (unsigned)time(NULL) );
    dado = 1 + ( rand() % 6); 
    printf("Valor do dado: %d \n\n\n", dado);

    if(dado <= 4){ 
      type_text("Entao ele com pressa, sabendo que estava atrasado, confiante em si mesmo tenta pular e ao chegar ao topo da grade ele entao enrosca o seu tenis em uma das pontas do arame que por ventura estava solto, cai e machuca sua perna. Ao tentar levantar, sente uma dor tremenda e resolve pedir ajuda, por sorte ve uma pessoa que o ajuda e entao e socorrido. ", 30);
      
      type_text("\n-> Por fim, Eustacio abandona um dia de trabalho, deixando suas filhas em casa com fome e preocupadas pelo 'sumico de seu pai'.", 50);
      type_text("\n\nFINAL 1th / 5", 140);
      vet[2] = 0;
      
    }else{ 
      longocurto(item, vet);
      vet[2] = 1 ;   
    }
  }
  
  if(pular == 0){ //PULAR GRADE
    
    type_text("Entao ele com pressa, sabendo que estava atrasado, confiante em si mesmo tenta pular e ao chegar ao topo da grade ele entao enrosca o seu tenis em uma das pontas do arame que por ventura estava solto, cai e machuca sua perna. Ao tentar levantar, sente uma dor tremenda e resolve pedir ajuda, por sorte ve uma pessoa que o ajuda e entao e socorrido. ", 50);
    type_text("\n-> Por fim, Eustacio abandona um dia de trabalho, deixando suas filhas em casa com fome e preocupadas pelo 'sumico de seu pai'.", 50);
    type_text("\n\nFINAL 1th / 5", 140);
    
  }else if(pular == 1){ //NAO PULAR GRADE
    longocurto(item, vet);
  } 
}