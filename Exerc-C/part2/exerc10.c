#include <stdio.h>
#include <stdlib.h>


/*Utilizando listas faça um programa que faça 5 perguntas para uma pessoa sobre um crime. As perguntas são:
1."Telefonou para a vítima?"
2."Esteve no local do crime?"
3."Mora perto da vítima?"
4."Devia para a vítima?"
5."Já trabalhou com a vítima?
"O programa deve no final emitir uma classificação sobre a participação da pessoa no crime. 
Se a pessoa responder  positivamente  a  2  questões  ela  deve  ser  classificada como   "Suspeita",  
entre   3   e   4   como   "Cúmplice"   e   5   como "Assassino". 
Caso contrário, ele será classificado como "Inocente".
*/

int main (void){
    char perguntas[5][10] = {"Telefonou para a vítima?", "Esteve no local do crime?", "Mora perto da vítima?", "Devia para a vítima?", "Já trabalhou com a vítima?"};
    char respostas[5];



    printf("Responda às perguntas somente com S/N: \n");
    for(int i=0; i<5; i++){
        printf("%c", perguntas[i]);
        scanf ("%s", respostas[i]);

        

        
    }



}