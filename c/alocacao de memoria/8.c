#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vetor;
    vetor = calloc(1500,sizeof(int));
    int count =0;
    for(int i=0;i<1500;i++){
        if(vetor[i] == 0){
            count++;
        }
        vetor[i] = i;
    }
    printf("numero de 0: %d",count);

    for (int i=0;i<10;i++){
        printf("%d ",vetor[i]);
    }
printf("\n\n");
for (int i=1499;i>1489;i--){
        printf("%d ",vetor[i]);
    }

}