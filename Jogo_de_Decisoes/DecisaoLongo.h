#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>




void longocurto(int item, int *vet){
  
  int decisao;


  //ESCOLHEU CAMINHO CURTO MAS VOLTOU PELO LONGO

  if (item == 1){ //TEM O OITAO
    type_text("Eustacio ao dar meia volta", 30);
    type_text(", ",350);
    type_text("e abordado rapidamente por 2 pessoas em uma moto. O passageiro entao saca uma faca descendo da moto e ao vir em direcao do Eustacio, ameaca-o impondo que ele passasse todos seus pertences que ali carregava",30);
    type_text(", ",350);
    type_text("quando isso acontece Eustacio lembra do estranho que ele encontrou mais cedo",30);
    type_text("...",80);

    clear();

    //DECIDIR PEGAR O PRESENTE OU NAO
    type_text("OQUE VOCE FAZ?", 70);
    
    type_text("\n0- Tentar pegar o presente acreditando nas palavras do estranho \n\n1- Levantar as maos e dizer que podem levar qualquer coisa, afirmando que sua vida vale mais do que isto:\n\n", 30);

    type_text("O que deseja fazer: ", 70);
    scanf("%d", &decisao);
    vet[3] = decisao;

    if(decisao == 0){ //PEGAR  FINAL 2
      type_text("Eustacio por conta da adrenalina do momento consegue rapidamente desembrulhar o 'presente'. Ao desembrulhar percebe-se que na verdade o presente se tratava de uma ",30); 
      type_text("'M19, uma arma .45',",100);
      type_text("ao saca-la ele por conta da adrenalina e do nervosismo apenas aponta em direcao aos bandidos que sai em fuga desesperadamente.",30);
      type_text("\n-> Por fim, Eustacio deixa a arma ali mesmo e volta para casa chocado com que aconteceu dentro desse pequeno periodo de tempo, ao olhar para o relogio, percebe-se que ja passaram das 8:00 horas e entao decide passar o resto do dia com suas filhas.", 30);
      type_text("\n\nFINAL 2th / 5", 140);



      
    }else if(decisao == 1){ //NAO PEGAR FINAL 3
      type_text("o bandido entao, primeiramente coloca a mao nos bolsos dele apontando a faca em direcao ao seu rosto e percebe rapidamente o que parece um objeto metalico embrulhado em um papel presente entao ele pega o pacote juntamente do celular e carteira.", 30);
      type_text("\n-> Por fim, depois desta humilhacao, Eustacio volta para casa cabisbaixo com que aconteceu e resolve faltar no dia de trabalho para ficar com suas filhas nas quais estavam com fome e so tinha cafe preto para elas tomarem.",50);
      type_text("\n\nFINAL 3th /5 ", 140);
    }
    
  }
  //FINAL CURTO INDO PARA O LONGO SEM OITAO
  if (item == 0){ //NAO TEM O OITAO

    type_text("Eustacio ao dar meia volta, e abordado rapidamente por 2 pessoas em uma moto. O passageiro entao saca uma faca descendo da moto e ao vir em direcao do Eustacio, ameaca-o impondo que ele passasse todos seus pertences que ali carregava", 30);
    
    type_text("\n\n",140);

    type_text("o bandido entao, primeiramente coloca a mao nos bolsos dele apontando a faca em direcao ao seu rosto impondo que ele passasse o celular e a carteira.\n",30);

    type_text("-> Por fim, depois desta humilhacao, Eustacio volta para casa cabisbaixo com que aconteceu e resolve faltar no dia de trabalho para ficar com suas filhas nas quais estavam com fome e so tinha cafe preto para elas tomarem.", 50);
    
    type_text("\n\nFINAL 3th /5 ", 140);
  }
}