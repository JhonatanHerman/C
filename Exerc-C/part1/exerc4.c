#include <stdio.h>


/*Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. 
Sabendo-se que ele recebe uma comissão de 3% sobre o total das vendas até R$ 1.500,00 mais 
5% sobre o que ultrapassar este valor, calcular e escrever o seu salário total.
*/



int main (void){

    //declaração de variaveis
    float salarioF, vendasEF, comissao1, comissao2, comissaoT, salarioT;

    //entrada de dados
    printf ("Digite seu salario fixo: ");
    scanf ("%f", &salarioF);

    printf ("Digite a quantia de vendas efetuadas: ");
    scanf ("%f", &vendasEF);

    if (vendasEF <= 1500){
        comissao1 = vendasEF * 0.03;
        printf ("sua comissao eh de: %2.f", comissao1);
        comissaoT = comissao1;

    }else {
        comissao1 = 1500 * 0.03;
        comissao2 = (vendasEF - 1500) * 0.05;
        comissaoT = comissao1 + comissao2;

        printf ("sua comissao eh de: %.2f", comissaoT);
    }


    salarioT = comissaoT + salarioF;
    printf ("\n\nseu salario total eh de: %2.f", salarioT);


    
}    