#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Em  um  banco,  as  contas  são  identificadas  por  números  de  até  6  (seis)  dígitos  seguidos  de  um 
dígito  verificador  (DV)  também  chamado  de  dígito  de  controle.  O  DV  é  calculado  conforme 
exemplificado a seguir. 
  
Exemplo: seja n = 7314 o número da conta. 
 
1º) Somamos os dígitos de n e obtemos a soma s = 4+1+3+7 = 15; 
2º) Calculamos o resto da divisão de s por 10 e obtemos o dígito d = 5. 
 
Resultado: Número de conta completo: 007314−5 
 
 
Dado um número de conta n, exiba o número de conta completo correspondente (número + DV) 
completando o resultado com zeros à esquerda. 
 
Observação: Utilizar o comando de repetição while */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, count = 0, conta1, conta2 = 0, soma = 0, resto = 0;
    char nome[30];

    printf("\nQual o seu nome? ");
  	scanf("%s",nome);
	printf("\n%s, digite o numero da sua conta (ate 6 digitos): ",nome);
    scanf("%d",&conta1);
    conta2 = conta1;
    while(conta2 > 0){
      i = conta2 % 10;
      conta2 = conta2 / 10;
      count++;
    }
    if(count <= 6){
        conta2 = conta1;
        // Separar cada digito de "conta2"
        while(conta2 > 0){
        i = conta2 % 10;
        conta2 = conta2 / 10;
        soma += i;
        }   
        resto = soma % 10;

        printf("\nO numero completo da conta: 00%d-%d.\n",conta1,resto);
    }
    else if(count > 6){
        printf("\nA conta possui mais de 6 digitos. Nao identificada.\n");
    }
    return 0;
}