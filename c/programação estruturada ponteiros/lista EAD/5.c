#include <stdio.h>

void ordenar(int *a,int *b){
    int aux;
    if(*b > *a){
        aux = *a;
        *a = *b;
        *b = aux;
    }
}
int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);

    ordenar(&n1,&n2);
    printf("maior: %d\nmenor: %d",n1,n2);
}