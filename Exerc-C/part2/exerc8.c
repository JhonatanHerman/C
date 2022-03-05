#include <stdio.h>
#include <stdlib.h>

/*Foram anotadas as idades e alturas de 30 alunos. 
Faça um Programa que determine quantos alunos com mais de 13 anos possuem 
altura inferior à média de altura desses alunos.
*/

int main (void){
    
    int P = 5;
    float vetoridade[P], vetoraltura[P], mediaaltura;

    for(int i=0; i<P; i++){
        
        printf("Digite a idade do aluno %d: ", (i+1));
        scanf("%f", &vetoridade[i]);

        printf("Digite a altura do aluno %d: ", (i+1));
        scanf("%f", &vetoraltura[i]);

    }
    for(int i=0; i<P; i++){
        if(vetoridade[i] == 14){
            mediaaltura = 1.59;
        }
        if(vetoridade[i] == 15){
            mediaaltura = 1.61;
        }
        if(vetoridade[i] == 16){
            mediaaltura == 1.63;
        }
        if(vetoridade[i] == 17){
            mediaaltura == 1.65;
        }
    }

    for(int i=0; i<P; i++){
        if (vetoridade[i] > 13){
            if(vetoraltura[i] < mediaaltura){
                printf("\nAluno %d, com altura %.2f está abaixo da media.\n", (i+1), vetoraltura[i]);
            }

        }

    }


}



