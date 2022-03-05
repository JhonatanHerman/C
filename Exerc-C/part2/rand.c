#include <stdio.h>
#include <stdlib.h>

int main (){
  int nr = 15, resp, k=0;
  int num[nr];

  for (int i=0; i< nr; i++){
    num[i] = rand() % 50;
  }

  printf("VETOR\n");
  for (int i=0; i< nr; i++){
    printf("%d ", num[i]);
  }

  printf("\n\nDigite um numero para saber se foi sorteado: ");
  scanf("%d", &resp);

  for(int i=0; i<nr; i++){
    if(num[i] == resp || num[nr-i] == resp){
      printf("Seu numero foi sorteado!!!");
      k++;
      break;
    }
  }
  if(k ==0){
    printf("\nSeu numero nao foi sorteado :(");
  }
  return 0;
}