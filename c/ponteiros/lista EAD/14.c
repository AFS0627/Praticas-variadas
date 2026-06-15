#include <stdio.h>

void func(int *vet, int tamanho, int valor){
    int fim = *vet + tamanho;
        while (vet<fim){
        *vet = valor;
        vet++;
    }
}
int main(){
    int valor,tamanho;
    tamanho = 5;
    valor = 10;
    int vetor[tamanho];
    func(&vetor,tamanho,valor);
    for (int i=0;i<tamanho;i++){
    printf("\n%d",vetor[i]);
}}