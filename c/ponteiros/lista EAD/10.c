#include <stdio.h>

int main(){
    int n[5];
    int *pn = n;

    for (int i=0;i<5;i++){
        scanf("%d",pn+i);
    }
    for (int i=0;i<5;i++){
        printf("\nn[%d] = %d",i,*(pn+i) * 2);
    }
}