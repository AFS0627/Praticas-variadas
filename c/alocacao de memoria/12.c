#include <stdio.h>
#include <stdlib.h>

struct produto{
    int cod;
    char nome[50];
    int qntd;
    float preco;
};
void preenche(struct produto *p,int n){
    for (int i=0;i<n;i++){
        printf("cod produto %d: ",i+1);
        scanf("%d",&p[i].cod);
        printf("nome produto %d: ",i+1);
        scanf("%s",p[i].nome);
        printf("qntd produto %d: ",i+1);
        scanf("%d",&p[i].qntd);
        printf("preco produto %d: ",i+1);
        scanf("%f",&p[i].preco);
    }
}
struct produto maiorpreco(struct produto *p,int n){
    struct produto maior;
    for (int i=0;i<n;i++){
        if(i==0){
            maior = p[i];
        }else if(maior.preco < p[i].preco){
            maior = p[i];
        }
    }
    return maior;

}
struct produto maiorestoque(struct produto *p,int n){
    struct produto maior;
    for (int i=0;i<n;i++){
        if(i==0){
            maior = p[i];
        }else if(maior.qntd < p[i].qntd){
            maior = p[i];
        }
    }
    return maior;

}

int main(){
    int n;
    struct produto *p;
    printf("quantos produtos: ");
    scanf("%d",&n);
    p = malloc(n * sizeof(struct produto));
    preenche(p,n);
    struct produto maiorE,maiorP;
    maiorE = maiorestoque(p,n);
    maiorP = maiorpreco(p,n);
    printf("Maior estoque:\ncod: %d\nnome: %s\nqntd: %d\npreco: %.2f\n\nMaior preco: \ncod: %d\nnome: %s\nqntd: %d\npreco: %.2f",maiorE.cod,maiorE.nome,maiorE.qntd,maiorE.preco,maiorP.cod,maiorP.nome,maiorP.qntd,maiorP.preco);
    free(p);
}