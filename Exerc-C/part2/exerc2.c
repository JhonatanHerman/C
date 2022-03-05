#include <stdio.h>
#include <stdlib.h>

int main (void){
    char vdc[10];
    char vvogais[6] = {'a','e','i','o','u'};

    printf ("Digite ate dez caracteres: ");
    scanf ("%s", vdc);

    for(int i=0; i<10; i++){
        
        if (vdc[i] != vvogais[i]){
            vdc[i] = vdc[i] - ;
            printf ("%c \n", vdc[i]);
        } 
        

    }
    
    


}