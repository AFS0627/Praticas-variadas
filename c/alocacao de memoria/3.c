#include <stdlib.h>
#include <stdio.h>

void lerVetor(int *vetor, int tamanho, int *pares, int *impares){
    *pares = 0;
    *impares = 0;
    for(int i=0;i<tamanho;i++){
        printf("digite os numeros");
        scanf("%d",&vetor[i]);
        if(vetor[i] % 2 ==0){
            *pares+= 1;

        }else{
            *impares += 1;
        }
    }

}

int main(){
    int tamanho,pares,impares;
    int *vetor;
    printf("tamanho para alocar: ");
    scanf("%d",&tamanho);
    vetor = malloc (tamanho * sizeof(int));
    lerVetor(vetor,tamanho,&pares,&impares);
    free(vetor);
    printf("\n\npares: %d\nImpares: %d",pares,impares);
}