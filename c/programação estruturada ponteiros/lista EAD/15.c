#include <stdio.h>

void nvezes(int *vet,int n){
    int *fim = vet + n;
    int *inicio =vet;
    int maior;
    int count = 0;
    while (vet < fim){
        if(vet == inicio){
            maior = *vet;
        }else if(*vet > maior){
            maior = *vet;
        }
        vet++;
    }
    vet = inicio;
    while (vet < fim){
        if(*vet == maior){
            count++;
        }
        vet++;
    }
     *(inicio + n) = maior;
      *(inicio + n + 1) = count;

}
int main(){
    int vet[10] =  {5, 2, 15, 3, 7, 15, 8, 6};
    nvezes(vet,8);
    printf ("maior: %d\nn vezes: %d",vet[8],vet[9]);
}
