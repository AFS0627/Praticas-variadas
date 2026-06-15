#include <stdio.h>

void troca(int *n1,int *n2){
    int aux;
    aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}
int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    troca(&n1,&n2);
    printf("%d  %d",n1,n2);
}