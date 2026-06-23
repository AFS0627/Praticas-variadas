#include <stdio.h>
#include <stdlib.h>

struct produto {
char nome[30];
int codigo;
float preco;
};

int main() {
char *vetor1kb;
int **matriz;
struct produto *produtos;
char **texto;
int i;

vetor1kb = malloc(1024 * sizeof(char));

matriz = malloc(10 * sizeof(int *));
for(i = 0; i < 10; i++) {
matriz[i] = malloc(10 * sizeof(int));
}

produtos = malloc(50 * sizeof(struct produto));

texto = malloc(100 * sizeof(char *));
for(i = 0; i < 100; i++) {
texto[i] = malloc(81 * sizeof(char));
}

printf("Memorias alocadas com sucesso.\n");

free(vetor1kb);

for(i = 0; i < 10; i++) {
free(matriz[i]);
}
free(matriz);

free(produtos);

for(i = 0; i < 100; i++) {
free(texto[i]);
}
free(texto);

return 0;
}