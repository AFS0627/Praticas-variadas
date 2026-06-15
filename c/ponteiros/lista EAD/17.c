#include <stdio.h>

int somaArray(int *vet1,int n1,int *vet2,int n2,int *vet3){
    if(n1 != n2){
        return 0;
    }else{
        for (int i=0;i<n1;i++){
            *(vet3+i) = *(vet1+i) + *(vet2+i);
        }
        return 1;
    }

}
int main(){
    int vet1[5] = {1,2,3,4,5};
    int vet2[5] ={1,2,3,4,5};
    int vet3[5];
    int resultado = somaArray(vet1,5,vet2,5,vet3);
    if(resultado == 0){
        printf("vetores com tamanhos diferentes!");

        
    }else{
        for (int i=0;i<5;i++){
        printf("\n%d",vet3[i]);
    }
}
}