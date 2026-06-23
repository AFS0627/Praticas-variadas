#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vetor = NULL;
    int i=0;
    int numero;
    while (1){
        printf("digite os numeros: ");
        scanf("%d",&numero);
        
        if(numero < 0){
            break;
        }
        
        vetor = realloc(vetor, (i+1) *sizeof(int));
        vetor[i] = numero;
        i++;
    }
    
    for(int j=0;j<i;j++){
        printf("%d ",vetor[j]);
    }
}