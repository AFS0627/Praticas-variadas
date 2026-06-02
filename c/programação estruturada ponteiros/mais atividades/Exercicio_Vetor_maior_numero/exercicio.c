#include <stdio.h>

void preencher(int *vet1,int n){
    for(int i=0;i<n;i++){
        printf("numeros: ");
        scanf("%d",vet1+i);
    }
}
void mostrar(int *vet1,int n){
    for(int i=0;i<n;i++){
        printf("\n%d",*(vet1+i));
        
    }
}
void maior1(int *vet1,int n,int *maior){
    for(int i=0;i<n;i++){
        if(i==0){
            *maior = *(vet1+i);
        }else if(*(vet1+i) > *maior){
            *maior = *(vet1+i);
        }
        
    }
}
int main(){
    int n = 5;
    int vet[n];
    int maior;
    preencher(vet,n);
    mostrar(vet,n);
    maior1(vet,n,&maior);
    printf("\nMaior: %d",maior);

}