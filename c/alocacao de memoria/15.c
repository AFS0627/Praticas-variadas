#include <stdio.h>
#include <stdlib.h>

int main() {
int *vetor;
int *novo;
int tamanho = 10;
int qtd = 0;
int num, i;

vetor = malloc(tamanho * sizeof(int));

while(1) {
printf("Digite um numero (0 para sair): ");
scanf("%d", &num);

if(num == 0) {
break;
}

if(qtd == tamanho) {
novo = malloc((tamanho + 10) * sizeof(int));

for(i = 0; i < tamanho; i++) {
novo[i] = vetor[i];
}

free(vetor);

vetor = novo;
tamanho += 10;
}

vetor[qtd] = num;
qtd++;
}

printf("\nValores digitados:\n");

for(i = 0; i < qtd; i++) {
printf("%d ", vetor[i]);
}

free(vetor);

return 0;
}