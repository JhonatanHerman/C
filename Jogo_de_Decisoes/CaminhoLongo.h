#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>


void longo(int item){
  
  if (item == 1){
    // CAMINHO LONGO COM O ITEM
    
    type_text("Eustacio esta caminhando rapidamente em direcao a padaria e abordado por uma blitz local na qual ele nao tinha notado sua presenca.\n-Voce ai! Encosta, MAO NA PAREDE!\n Eustacio levemente assustado porem com a consciencia limpa responde:\n-Sem problemas seu Policial, a suas ordens", 30);

    type_text("\nO Oficial entao ao revista-lo nota um objeto pesado, pelo seu tamanho, embrulhado em um papel presente, ao abrir ele reconhece no ato, ",30);
    type_text("'UMA M19, ARMA .45MM',",100); 
    type_text(" o oficial treinado para lidar com esse tipo de situcao",50);

    type_text(" mostra o revolver para o Eustacio e diz em alto em bom tom: \n- POSSO SABER DO QUE ISSO SE TRATA? DACUNHA PODE ALGEMAR ESSE DAI, VOCE ESTA PRESO CIDADAO! \n- ma-mas... \n- VOCE NAO TEM OQUE SE EXPLICAR PARA MIM, CONVERSE COM O JUIZ NO SEU JULGAMENTO! \n- P-Policial, mas eu sou um cara de familia, isso fo-",30);
  

    type_text("\nNesse momento o Oficial anteriormente chamado de Dacunha o imobilizou e o algemou, em um piscar de olhos, Eustacio estava dentro do porta-malas da viatura sendo levado a custodia para justificar a quebra da lei de contravencao penal(3.688/41), que diz que" ,30); 
    type_text("'a pessoa que portar arma fora de casa sem autorizacao estara sujeita a prisao simples de 15 dias a 6 meses ou pagamento de multa' " ,30);
    
    clear();
    
    type_text("Pos julgamento do juiz foi decretado prisao de 2 meses fora a investigacao complementar por conta de suspeita de homicidio, ",30);
    type_text("pois o numero de serie e o calibre da arma batiam com uma investigacao local que estava em aberto, tal investigacao se tratava de um assassinato a queima roupa de feito por uma M19 calibre .45." ,30);

    type_text("\n-> Por fim, Eustacio foi detido por 2 meses sem conseguir pagar fianca e provar a situacao que lhe ocorreu para os oficiais, alem disso ele fica de muito abalado psicologicamente por conta das suas filhas deixadas em casa sem saber do ocorrido.", 50);
    
    type_text("\n\nFINAL 4th /5 ", 140);
  }
  else { 
    type_text("Eustacio caminhando em passos rapidos e preocupado com o relogio, visualiza uma blitz local acontecendo, e por algum motivo ao passar na frente dos Policiais ", 30);
    type_text("ele sente um frio na espinha", 30);
    type_text(", mas por sorte passa tranquilamente.", 30);
    type_text("\nApos comprar 6 paes franceses, ele olha no relogio e esta por volta das 7:40, entao ele volta rapidamente para casa e cumprimenta suas amadas filhas, entao encarrega sua filha mais velha de preparar um pao para a mais sua irma mais nova e sai para trabalho ja que esta em cima do horario.", 30);
    type_text("\n-> Por fim, Eustacio chega a tempo em seu servico, e feliz sabendo que suas filhas estao em casa em seguranca.", 30);

    type_text("\n\nFINAL 5th /5 ", 140);
  }
}