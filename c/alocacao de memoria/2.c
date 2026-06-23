#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamanho;
    int *vetor;
    printf("digite o tamanho do vetor: ");
    scanf("%d",& tamanho);
    vetor = malloc(tamanho * sizeof(int));

    for(int i=0;i<tamanho;i++){
        printf("digite os numeros: ");
        scanf("%d",&vetor[i]);
    }
    for(int i=0;i<tamanho;i++){
        printf("%d\n",vetor[i]);
    }
    free(vetor);


}