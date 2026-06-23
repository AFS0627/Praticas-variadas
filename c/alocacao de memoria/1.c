#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vetor;
    vetor = malloc(5 * sizeof(int));
    for(int i=0;i<5;i++){
        printf("digite os numeros: ");
        scanf("%d",& vetor[i]);

    }
    for(int i=0;i<5;i++){
        printf("%d\n ",vetor[i]);
        
        
    }
    free(vetor);
   
}