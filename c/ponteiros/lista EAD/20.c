#include <stdio.h>

void lerNotas(float *n1, float *n2){
    printf("n1: ");
    scanf("%f",n1);
    printf("n2: ");
    scanf("%f",n2);

}
void calculaMedia(float *n1, float *n2, float *mediaSimples,float *mediaPonderada){
    *mediaSimples = (*n1 + *n2) / 2;
    *mediaPonderada = (*n1+(*n2 *2)) / 3;
}
int main(){
    float n1,n2,mediaSimples,mediaPonderada;
    lerNotas(&n1,&n2);
    calculaMedia(&n1,&n2,&mediaSimples,&mediaPonderada);
    printf("Media simples: %.2f\n", mediaSimples);
    printf("Media ponderada: %.2f\n", mediaPonderada);

}