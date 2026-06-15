#include <stdio.h>

int somaDobro(int *a,int *b){
    *a = (*a * 2);
    *b = (*b *2);
    return *a+*b;
}

int main(){
    int a,b,soma;
    scanf("%d %d",&a,&b);
    soma = somaDobro(&a,&b);
    printf("\na: %d\nb: %d\nsoma: %d",a,b,soma);
}