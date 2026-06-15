#include <stdio.h>
struct pessoa{
    char nome[30];
    int idade;
};

void aumentaIdade(struct pessoa *p){
    p->idade = p->idade + 1;
}
int main(){
    struct pessoa p;
    printf("nome: ");
    scanf(" %[^\n]",p.nome);
    printf("idade: ");
    scanf("%d", &p.idade);
    printf("\nantes \nnome: %s\nidade: %d",p.nome,p.idade);
    aumentaIdade(&p);
    printf("\ndepois \nnome: %s\nidade: %d",p.nome,p.idade);
}