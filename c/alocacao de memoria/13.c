#include <stdio.h>
#include <stdlib.h>

int buscarValor(int **matriz, int linhas, int colunas, int valor) {
    int i, j;

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            if (matriz[i][j] == valor) {
                return 1;
            }
        }
    }

    return 0;
}

int main() {
    int **matriz;
    int linhas, colunas;
    int i, j;
    int valor;

    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);
    matriz = (int **) malloc(linhas * sizeof(int *));

    for (i = 0; i < linhas; i++) {
        matriz[i] = (int *) malloc(colunas * sizeof(int));
    }

    printf("\nDigite os elementos da matriz:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("matriz[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nDigite o valor a ser procurado: ");
    scanf("%d", &valor);

    if (buscarValor(matriz, linhas, colunas, valor)) {
        printf("1 - Valor encontrado na matriz.\n");
    } else {
        printf("0 - Valor nao encontrado na matriz.\n");
    }

    for (i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}