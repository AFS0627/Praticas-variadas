#include <stdio.h>

void maxmin(int *vet,int n,int *max,int *min){
    for(int i=0;i<n;i++){
        if(i == 0){
            *max = *(vet+i);
            *min = *(vet+i);
        }
            if(*max < *(vet+i)){
            *max = *(vet+i);
        }
        if(*min > *(vet+i)){
            *min = *(vet+i);
        }
    }
}

int main(){
    int n = 5;
    int vet[5] = {1,2,3,4,5};
    int min,max;
    maxmin(vet,n,&max,&min);
    printf("min: %d\nmax: %d",min,max);
}