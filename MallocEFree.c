#include <stdio.h>
#include <stdlib.h>


float calcMediaArit(float *notas, int count);
float MaiorMenor(float *notas, int count);


int main()
{

    int n; //quantidade de alunos
    float *notas;
    int count=0;

    printf("Informe a quantidade de alunos a terem as notas digitadas: ");
    scanf("%d", &n);

    notas = malloc ((n*4) * sizeof (float));

    for (int i = 0; i < n; i++){
        printf("\nDigite as notas do aluno %d: ", (i+1));

        for(int j=0; j<4; j++){
            printf("\nNota %d: ", (j+1));
            scanf ("%f", &notas[count]);
            count++;
        }


    }

    printf("\n\nMedia Aritmética: %.2f", calcMediaArit(notas, count));

    MaiorMenor(notas, count);






    free(notas);
    return 0;
}

float calcMediaArit(float *notas, int count){
    float soma=0;
    float medA=0;


    for(int i=0; i<count; i++){
        soma += notas[i];

    }

    medA = soma / count;
    return medA;

}

float MaiorMenor(float *notas, int count){

    float maior=0, menor=0;
    int receba;



    for(int i=0; i<count; i++){
        //receba = notas[i];
        if(notas[i] > maior){
            maior = notas[i];
        }else{
            menor = notas[i];
        }
    }

    printf("\n\nMaior nota: %.2f", maior);
    printf("\n\nMenor nota: %.2f", menor);

}
