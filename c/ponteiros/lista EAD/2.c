#include <stdio.h>

int main(){
    int n1 = 1;
    int n2 = 2;

    int *pn1;
    int *pn2;

    pn1 = &n1;
    pn2 = &n2;

    if (pn1 > pn2){
        printf("%d",(void *)pn1);
    }else{
        printf("%d",(void *)pn2);
    }
}