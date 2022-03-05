#include <stdio.h>
#include <stdlib.h>

void funcaovetor(int num[]);

void main(){
    
    int num[] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    for(int i=0; i<10; i++){
        printf("%d \n ", num[i]);
    }
    
    
    funcaovetor(num);
}

void funcaovetor(int num[]){
    int temp;
    for(int pass=0; pass<10; pass++){
        for(int u=0; u<(10-1); u++){
            if(num[u]>num[u+1]){
                temp = num[u];
                num[u] = num[u+1];
                num[u+1] = temp;
            }
        }
    }
    
    
    
    printf("DEPOIS DA ORDENAÇÃO \n");
    for(int i=0; i<10; i++){
        printf("%d \n", num[i]);
    }
    
}