#include <stdio.h>
#include <stdlib.h>

struct aluno{
    char nome[50];
    int matricula;
    float nota;
};

void lerdados(struct aluno *a,int n){
    for(int i=0;i<n;i++){
        printf("nome aluno %d: ",i+1);
        scanf(" %s",a[i].nome);
        printf("matricula aluno %d: ",i+1);
        scanf("%d",&a[i].matricula);
        printf("nota aluno %d: ",i+1);
        scanf("%f",&a[i].nota);

    }
}
void exibirdados(struct aluno *a,int n){
    for(int i=0;i<n;i++){
        printf("\nnome aluno %d: %s",i+1,a[i].nome);
        printf("\nmatricula aluno %d: %d",i+1,a[i].matricula);
        printf("\nnota aluno %d: %.2f\n\n",i+1,a[i].nota);

    }
}
int main(){
    struct aluno *a;
    int n;
    printf("quantos alunos: ");
    scanf("%d",&n);
    a = malloc(n * sizeof(struct aluno));
    lerdados(a,n);
    exibirdados(a,n);
    free(a);

}