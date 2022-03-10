#include <stdio.h>
#include <stdlib.h>

/*Numa  faculdade,  os  alunos  com  média  pelo  menos  7,0  são  aprovados,  aqueles  com  média 
inferior a 3,0 são reprovados e os demais ficam de recuperação.  
Dadas 2 (duas) notas de um aluno, calcule sua média (média aritmética simples) e  informe sua 
situação.  
Apresente  como  saída  a  nota  média  calculada  e  as  mensagens  relativas  à  situação  final  do 
aluno, a saber “Aprovado”, “Reprovado” ou “Recuperação”, respectivamente.*/

void main(){
	float nota1, nota2, media;

	printf("Digite a primeira nota do aluno: ");
	scanf("%f", &nota1);

	printf("Digite a segunda nota do aluno: ");
	scanf("%f", &nota2);

	media = (nota1 + nota2) / 2;

	if(media >= 7){
		printf("\n\nMedia calculada: %.2f \n", media);
		printf("Aluno aprovado!!");

	}else if(media < 7 && media >= 3){
		printf("\n\nMedia calculada: %.2f \n", media);
		printf("Aluno de recuperacao.");

	}else{
		printf("\n\nMedia calculada: %.2f \n", media);		
		printf("Aluno reprovado...");
	}


}