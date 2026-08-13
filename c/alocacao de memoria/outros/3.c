#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vetor;
    vetor = calloc (5 , sizeof(int));
    for(int i=0;i<5;i++){
        scanf("%d",&vetor[i]);
    }
    vetor = realloc(vetor , 10 * sizeof(int));
    for(int i=5;i<10;i++){
        scanf("%d",&vetor[i]);
    }
for(int i=0;i<10;i++){
        printf("%d ",vetor[i]);
    }
    free(vetor);
}