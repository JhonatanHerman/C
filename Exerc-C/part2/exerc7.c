#include <stdio.h>
#include <stdlib.h>

/*Altere o programa anterior, intercalando 3 vetores de 10 elementos cada.
*/



int main (void){
    int a=0, b=0, c=0;
    int vetor1[10], vetor2[10], vetor3[10], vetor4[30];
    
    printf("Digite 10 elementos para o vetor 1: \n");

    for(int i=0; i<10; i++){
      printf("Digite o elemento %d: ", (i+1));
      scanf("%d", &vetor1[i]);

    }
    
    printf("Digite 10 elementos para o vetor 2: \n");
    for(int i=0; i<10; i++){
      printf("Digite o elemento %d: ", (i+1));
      scanf("%d", &vetor2[i]);

    }
    
    printf("Digite 10 elementos para o vetor 3: \n");
    for(int i=0; i<10; i++){
      printf("Digite o elemento %d: ", (i+1));
      scanf("%d", &vetor3[i]);
    }
    
    for(int i=0; i<30; i+=3){
      vetor4[i] = vetor1[a];
      a+=1;
      vetor4[i+1] = vetor2[b];
      b+=1;
      vetor4[i+2] = vetor3[c];
      c+=1;
    }
    

    for(int i=0; i<30; i++){
      printf("%d\n", vetor4[i]);

    }

}