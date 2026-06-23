#include <stdio.h>
#include <stdlib.h>

int main(){

int bytes;
int posicao;
int valor;
int opcao;

printf("Quantos bytes de memoria deseja alocar? ");
scanf("%d",&bytes);

if(bytes % sizeof(int) != 0){
    printf("O valor deve ser multiplo de %lu\n", sizeof(int));
    return 1;
}

int tamanho = bytes / sizeof(int);

int *memoria = calloc(tamanho,sizeof(int));

if(memoria == NULL){
    printf("Erro ao alocar memoria\n");
    return 1;
}

do{

printf("\n1 - Inserir valor\n");
printf("2 - Consultar valor\n");
printf("0 - Sair\n");
printf("Opcao: ");
scanf("%d",&opcao);

if(opcao == 1){

    printf("Posicao (0 ate %d): ", tamanho - 1);
    scanf("%d",&posicao);

    if(posicao < 0 || posicao >= tamanho){
        printf("Posicao invalida\n");
    }
    else{
        printf("Valor: ");
        scanf("%d",&valor);

        memoria[posicao] = valor;
    }

}
else if(opcao == 2){

    printf("Posicao (0 ate %d): ", tamanho - 1);
    scanf("%d",&posicao);

    if(posicao < 0 || posicao >= tamanho){
        printf("Posicao invalida\n");
    }
    else{
        printf("Valor armazenado: %d\n", memoria[posicao]);
    }

}

}while(opcao != 0);

free(memoria);

return 0;

}