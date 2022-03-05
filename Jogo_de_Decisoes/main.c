#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h> 
#include "biblio.h"
#include "CaminhoCurto.h"
#include "CaminhoLongo.h"

int dado, n=0;
int item, rota, pular;

int main (void){   
  system("color 3");
  int vet[10] = {};

  //INTRODUÇÃO
  
  type_text("Eustacio trabalha como encanador, pai solteiro, viuvo e com duas filhas, ele costuma acordar bem cedo e ir na padaria comprar seu pao diario, mas hoje exclusivamente ele acordou atrasado e esta indeciso pois precisa colocar o cafe na mesa antes do seu horario de trabalho. Ele entra em servico as 8:00, agora sao 7:00 e ele esta pronto para ir na padaria, sabendo disso, ele conhece 2 caminhos para a padaria, o caminho 'Longo' que ele normalmente vai quando nao quer enfrentar muita irregularidade no terreno e o caminho 'Curto' que e necessario ir por umas vielas estreitas.", 30);

  clear();

  type_text("Logo apos sair de casa ele ve do outro lado da rua uma pessoa de mascara e bone vindo em sua direcao, percebendo isto Eustacio disse: \n- Opa, bom dia! \n- Bom dia meu jovem rapaz, voce foi abencoado \n- ... (Eustacio olha com cara de espanto) \n- Eu, apenas um viajante, tenho uma coisa que pode te ajudar em momentos dificeis, voce aceitaria este presente que lhe ofereco?", 30);

  clear();

  //DECISÃO DO ITEM

  type_text("Voce deseja pegar o presente? \n\n1 = aceitar  \n0 = negar\n\n\n\nR:", 30);
  scanf("%d", &item); 
  vet[0] = item;

  if(item == 1){ //PEGAR ITEM
    type_text("\nEustacio pega o presente e agradece, guardando-o para si", 70);
    
    
  }else if(item == 0){ //NAO PEGAR ITEM
    type_text("\nEustacio agradece pelo gesto, mas nega educadamente e segue seu rumo", 70);
    
  }
  //DECISÃO DO CAMINHO

  type_text(" ...",1000);
  type_text("\n\nDepois deste acaso, Eustacio se toca que o horario nao esta em seu favor, e ele precisa decidir se vai pelo caminho 'curto' ou pelo caminho 'longo'.", 30);

  clear();

  type_text("Voce decidi ir pelo caminho longo ou pelo caminho curto? ", 40);
  type_text("\n\n0 = Curto\n1 = Longo\n2 = Tirar a sorte nos dados", 40);
  type_text(" \n\n\nR: ", 0); 
  scanf("%d", &rota);
  vet[1] = rota;

  system("cls");

  if(rota == 2){ //TIROU A SORTE PARA ESCOLHER O CAMINHO
    srand( (unsigned)time(NULL) );
    dado = 1 + ( rand() % 6); 
    printf("Valor do dado: %d \n\n\n", dado);

    if(dado <= 4){ //CAMINHO CURTO "DECISAO"
      vet[1] = 0;
      curto(item, vet);
      
    }else{ //CAMINHO LONGO "DECISAO"
      vet[1] = 1;
      longo(item);
    }

  }else if(rota == 0){ //CAMINHO CURTO
    curto(item, vet);

  }else if(rota == 1){ //CAMINHO LONGO
    longo(item);
  } 
    type_text("\n\n-=-=-=-=RESUMO=-=-=-=-\n", 65);
  type_text("SUAS ESCOLHAS:\n",70);
    if (vet[0] == 1){
      type_text("\n\n-> Voce decidiu PEGAR o item", 60);
    }
    else if (vet[0] == 0){
      type_text("\n\n-> Voce decidiu NAO pegar o item", 60);
    }
    if (vet[1] == 0){
      type_text("\n\n-> Voce decidiu seguir pelo caminho CURTO", 60);
      if(vet[2] == 0){
      type_text("\n\n-> Voce decidiu PULAR a grade",60);
      }
      else if(vet[2] == 1){
        type_text("\n\n-> Voce decidiu VOLTAR pelo caminho longo",60);
        if (item == 1){
          if(vet[3] == 0){
            type_text("\n\n-> Voce decidiu ABRIR o presente",60);
            
          }else if(vet[3] == 1){
            type_text("\n\n-> Voce decidiu se RENDER",60);
          }
        }
          
      }
    }
    else if(vet[1] == 1){
      type_text("\n\n-> Voce decidiu seguir pelo caminho LONGO", 60);
    }
    printf("\n\n\n");
}
