#include <stdlib.h>
#include <stdio.h>

struct aluno{
    char matricula[11];
    char sobrenome[30];
    int anonsc;
};

int main(){
    struct aluno *a;
    int n;
    printf("informe o numero de alunos para armazenar: ");
    scanf("%d",&n);
    a = malloc(n * sizeof(struct aluno));
    for (int i=0;i<n;i++){
        printf("matricula aluno %d: ",i+1);
        scanf(" %s",a[i].matricula);
        printf("sobrenome aluno %d: ",i+1);
        scanf(" %s",a[i].sobrenome);
        printf("ano nascimento aluno %d: ",i+1);
        scanf(" %d",&a[i].anonsc);

    }
    for (int i=0;i<n;i++){
        printf("matricula aluno %d: %s\n",i+1,a[i].matricula);
        
        printf("sobrenome aluno %d: %s\n",i+1,a[i].sobrenome);
        
        printf("ano nascimento aluno %d: %d\n\n",i+1,a[i].anonsc);
        

    }
    free(a);
}