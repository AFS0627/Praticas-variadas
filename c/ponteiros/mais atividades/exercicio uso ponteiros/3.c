#include <stdio.h>

int vetores(int *vet1,int *vet2,int *vet3,int n){
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(*(vet1 + i) == *(vet2 + j)){
                *(vet3+count) = *(vet1+i);
                count++;
                break;
            }
        }
    }
    return count;
}
int main(){
    int n = 4;
    int vet1[n], vet2[n],vet3[n];
    for (int i=0;i<n;i++){
        printf("preencha o vetor 1 e 2 nessa ordem n1 n2: ");
        scanf("%d %d",&vet1[i],&vet2[i]);
    }
    int count = vetores(vet1,vet2,vet3,n);
    for (int i=0;i<count;i++){
        printf("\n%d",vet3[i]);
        }
}