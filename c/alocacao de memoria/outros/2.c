#include <stdio.h>
#include <stdlib.h>

struct produto{
    char nome[20];
    int codigo;
    float preco;
};

void ler(struct produto *p,int n){
    for(int i=0;i<n;i++){
        printf("nome: ");
        scanf(" %s",p[i].nome);
        printf("codigo: ");
        scanf("%d",&p[i].codigo);
        printf("preco: ");
        scanf("%f",&p[i].preco);
    }
}
int maiscaro(struct produto *p, int n){
    float maior;
    int indice;
    for(int i=0;i<n;i++){
        if(i==0){
            indice = i;
            maior = p[i].preco;
        }else if(p[i].preco > maior){
            maior = p[i].preco;
            indice = i;
        }
    }
    return indice;
}
void exibir(struct produto *p,int n){
    for(int i=0;i<n;i++){
        printf("nome: %s\ncod: %d\npreco: %.2f\n\n",p[i].nome,p[i].codigo,p[i].preco);
    }
}
int main(){
    struct produto *p;
    int n;
    int indice;
    printf("quantos produtos: ");
    scanf("%d",&n);
    p = malloc(n * sizeof(struct produto));
    ler(p,n);
    exibir(p,n);
    indice = maiscaro(p,n);
    printf("Mais caro:\n");
    printf("nome: %s\ncod: %d\npreco: %.2f\n\n",p[indice].nome,p[indice].codigo,p[indice].preco);
    free(p);
}