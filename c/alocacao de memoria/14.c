#include <stdio.h>
#include <stdlib.h>

int main() {
int linhas, colunas, i, j;
float **matriz;

printf("Numero de linhas: ");
scanf("%d", &linhas);

printf("Numero de colunas: ");
scanf("%d", &colunas);

matriz = (float **)malloc(linhas * sizeof(float *));

for(i = 0; i < linhas; i++) {
matriz[i] = (float *)malloc(colunas * sizeof(float));
}

for(i = 0; i < linhas; i++) {
for(j = 0; j < colunas; j++) {
printf("Digite o valor [%d][%d]: ", i, j);
scanf("%f", &matriz[i][j]);
}
}

printf("\nMatriz:\n");

for(i = 0; i < linhas; i++) {
for(j = 0; j < colunas; j++) {
printf("%.2f\t", matriz[i][j]);
}
printf("\n");
}

for(i = 0; i < linhas; i++) {
free(matriz[i]);
}

free(matriz);

return 0;
}