#include <stdio.h>

int maiorValor(int *vet,int tamanho){
    int maior;
    for(int i = 0;i<tamanho;i++){
        if(i == 0){
            maior = *(vet+i);
        }else if(*(vet+i) > maior){
            maior = *(vet+i);
        }

    }
    return maior;

}
int main(){
    int n,maior;
    printf("n elementos: ");
    scanf("%d",&n);
    int vet[n];
    for(int i=0;i<n;i++){
        scanf("%d",&vet[i]);
    }
    maior = maiorValor(vet,n);
    int k;
    printf("k: ");
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        
        printf("%d  ",vet[i]);
        if((i+1) % k == 0){
            printf("\n");
        }
    }
    printf("\nmaior: %d",maior);



}