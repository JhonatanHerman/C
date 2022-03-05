#include <stdio.h>


void main ()
{
    

   /*Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. 
   Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11%  para  o Imposto de Renda, 
   8% para o INSS e 5% para o sindicato, faça um programa que nos dê:
   a.salário bruto.
   b.quanto pagou ao INSS.
   c.quanto pagou ao sindicato.
   d.o salário líquido.e.calcule os descontos e o salário líquido, conforme a tabela abaixo:*/
   
   
   
    //declaração de variaveis
    float horast, ganhoh, salariob, salariol, inss, ir, sindicato;

    //Entrada de dados
    printf ("digite quantas horas voce trabalha no mes: ");
    scanf ("%f", &horast);

    printf ("digite o quanto voce ganha por hora: ");
    scanf ("%f", &ganhoh);

    printf ("\n\nDescontos:\n\n");
    //Processamento
    salariob = (ganhoh * horast);
    printf ("Seu salario bruto e: %.2f\n", salariob);

    ir = (salariob * 0.11);-
    printf ("IR: %.2f\n", ir);

    inss = (salariob * 0.08);
    printf ("INSS: %.2f\n", inss);

    sindicato = (salariob * 0.05);
    printf ("Sindicato: %.2f\n", sindicato);
    
    //Saída
    salariol = (salariob - inss - sindicato - ir);
    printf ("Seu salario liquido e: %.2f\n\n", salariol);

    


}
