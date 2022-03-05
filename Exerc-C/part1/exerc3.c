#include <stdio.h>

/*
Faça um programa para a leitura de duas notas parciais de um aluno. 
O programa deve calcular a média alcançada por aluno e apresentar:•A mensagem "Aprovado", 
se a média alcançada for maior ou igual a sete;•A mensagem "Reprovado", se a média for menor do que sete;
*/

int main(void) {
    
    //declaração de variaveis
    float nota1, nota2, media;

    do{
      
      
      //entrada de dados
      printf ("\n\n\nPrimeira nota do aluno: ");
      scanf ("%f", &nota1);

      if (nota1 > 10){
        break;
      }
    

      printf ("Segunda nota do aluno: ");
      scanf ("%f", &nota2);

      if (nota2 > 10){
        break;
      }
      
      

      //processamento
      media = (nota1 + nota2) / 2;
      printf ("meida do aluno: %.2f", media);

      //condições
        
        
      if (media < 7){
        printf ("\nAluno REPROVADO");

      }else{
        printf ("\nAluno APROVADO");
      }
    }while (nota1 <= 10 && nota2 <= 10);
}