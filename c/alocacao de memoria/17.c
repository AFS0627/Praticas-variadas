#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct cidade {
char nome[50];
float x;
float y;
};

int main() {
struct cidade *cidades;
float **distancias;
int n, i, j;
int c1, c2;

printf("Quantidade de cidades: ");
scanf("%d", &n);

cidades = malloc(n * sizeof(struct cidade));

for(i = 0; i < n; i++) {
printf("\nCidade %d\n", i);
printf("Nome: ");
scanf("%s", cidades[i].nome);

printf("Coordenada X: ");
scanf("%f", &cidades[i].x);

printf("Coordenada Y: ");
scanf("%f", &cidades[i].y);
}

distancias = malloc(n * sizeof(float *));

for(i = 0; i < n; i++) {
distancias[i] = malloc(n * sizeof(float));
}

for(i = 0; i < n; i++) {
for(j = 0; j < n; j++) {
distancias[i][j] = sqrt(
pow(cidades[i].x - cidades[j].x, 2) +
pow(cidades[i].y - cidades[j].y, 2)
);
}
}

printf("\nMatriz de distancias:\n\n");

for(i = 0; i < n; i++) {
for(j = 0; j < n; j++) {
printf("%8.2f ", distancias[i][j]);
}
printf("\n");
}

printf("\nCidades cadastradas:\n");
for(i = 0; i < n; i++) {
printf("%d - %s\n", i, cidades[i].nome);
}

printf("\nDigite os indices de duas cidades: ");
scanf("%d %d", &c1, &c2);

if(c1 >= 0 && c1 < n && c2 >= 0 && c2 < n) {
printf("Distancia entre %s e %s: %.2f\n",
cidades[c1].nome,
cidades[c2].nome,
distancias[c1][c2]);
} else {
printf("Indices invalidos.\n");
}

for(i = 0; i < n; i++) {
free(distancias[i]);
}

free(distancias);
free(cidades);

return 0;
}