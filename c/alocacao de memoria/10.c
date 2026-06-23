#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher(double *vetor){
    srand(time(NULL));
    for(int i=0;i<10;i++){
        vetor[i] = rand() % 101;
    }
}

int main(){
    int n;
    double *vetor;
    printf("quantos valores aramazenar: ");
    scanf("%d",&n);
    while(n<10){
        printf("precisa de pelo menos 10 de espaco: ");
        scanf("%d",&n);
    }
    vetor = malloc(n * sizeof(double));
    preencher(vetor);

    for (int i=0;i<10;i++){
        printf("%.2f ",vetor[i]);
    }
    free(vetor);
   

}