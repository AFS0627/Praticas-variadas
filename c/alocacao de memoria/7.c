#include <stdio.h>
#include <stdlib.h>

void mostrar(int *acertos,int qtd){

printf("\nNumeros acertados:\n");

for(int i=0;i<qtd;i++){
printf("%d ",acertos[i]);
}

}

int main(){

int loteria[6];
int bilhete[6];
int qtdAcertos = 0;

printf("Digite os numeros sorteados:\n");

for(int i=0;i<6;i++){
scanf("%d",&loteria[i]);
}

printf("Digite os numeros do bilhete:\n");

for(int i=0;i<6;i++){
scanf("%d",&bilhete[i]);
}

for(int i=0;i<6;i++){

for(int j=0;j<6;j++){

if(bilhete[i] == loteria[j]){
qtdAcertos++;
}

}

}

int *acertos = malloc(qtdAcertos * sizeof(int));

int k = 0;

for(int i=0;i<6;i++){

for(int j=0;j<6;j++){

if(bilhete[i] == loteria[j]){
acertos[k] = bilhete[i];
k++;
}

}

}

printf("\nNumeros sorteados:\n");

for(int i=0;i<6;i++){
printf("%d ",loteria[i]);
}

printf("\nQuantidade de acertos: %d\n",qtdAcertos);

mostrar(acertos,qtdAcertos);

free(acertos);

return 0;

}