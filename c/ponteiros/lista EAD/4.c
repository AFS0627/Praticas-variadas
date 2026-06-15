#include <stdio.h>

void trocaNumeros(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;

}
int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    trocaNumeros(&n1,&n2);
    printf("\n\n%d %d",n1,n2);
}