#include <stdio.h>
struct funcionario{
    char nome[30];
    float salario;
};
void aumentaSalario(struct funcionario *f){
    f->salario = f->salario * 2;
}
int main(){
    struct funcionario f;
    scanf(" %[^\n]",f.nome);
    scanf("%f",&f.salario);
    printf("\nantes\nnome: %s\nsalario: %.2f",f.nome,f.salario);
    aumentaSalario(&f);
    printf("\ndepois\nnome: %s\nsalario: %.2f",f.nome,f.salario);


}