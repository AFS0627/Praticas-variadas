#include <stdio.h>

int main(){
    int n[5];
    for(int i=0;i<5;i++){
        scanf("%d",&n[i]);
    }
    for(int i=0;i<5;i++){
        if(n[i] % 2 == 0){
            printf("\nn[%d] = %p",i,(void *)&n[i]);
        }
    }
}