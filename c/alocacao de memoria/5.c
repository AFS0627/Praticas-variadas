#include <stdio.h>
#include <stdlib.h>

int *alocarVetor(int tamanho){
    
    int *vetor;
    vetor = malloc(tamanho * sizeof(int));
    for(int i=0;i<tamanho;i++){
        printf("digite os numeros: ");
        scanf("%d",&vetor[i]);
    }
    return vetor;
}
void multiplos(int *vetor, int x,int tamanho){
    int count =0;
    for(int i=0;i<tamanho;i++){
        if(vetor[i] % x == 0){
            count++;
            printf("%d ",vetor[i]);

        }
    }
}
int main(){
    int tamanho;
    printf("digite o tamanho do vetor: ");
    scanf("%d",&tamanho);
    int *vetor = alocarVetor(tamanho);
    int x;
    printf("numeros para achar multiplos: ");
    scanf("%d",&x);
    multiplos(vetor,x,tamanho);
}