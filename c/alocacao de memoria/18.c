#include <stdio.h>
#include <stdlib.h>

int main() {
int a, b, c, d;
int **m1, **m2, **produto;
int i, j, k;

printf("Digite as dimensoes da primeira matriz (a b): ");
scanf("%d %d", &a, &b);

printf("Digite as dimensoes da segunda matriz (c d): ");
scanf("%d %d", &c, &d);

if(b != c) {
printf("Nao e possivel multiplicar as matrizes.\n");
return 0;
}

m1 = malloc(a * sizeof(int *));
for(i = 0; i < a; i++) {
m1[i] = malloc(b * sizeof(int));
}

m2 = malloc(c * sizeof(int *));
for(i = 0; i < c; i++) {
m2[i] = malloc(d * sizeof(int));
}

produto = malloc(a * sizeof(int *));
for(i = 0; i < a; i++) {
produto[i] = malloc(d * sizeof(int));
}

printf("\nDigite os elementos da primeira matriz:\n");
for(i = 0; i < a; i++) {
for(j = 0; j < b; j++) {
scanf("%d", &m1[i][j]);
}
}

printf("\nDigite os elementos da segunda matriz:\n");
for(i = 0; i < c; i++) {
for(j = 0; j < d; j++) {
scanf("%d", &m2[i][j]);
}
}

for(i = 0; i < a; i++) {
for(j = 0; j < d; j++) {
produto[i][j] = 0;

for(k = 0; k < b; k++) {
produto[i][j] += m1[i][k] * m2[k][j];
}
}
}

printf("\nPrimeira matriz:\n");
for(i = 0; i < a; i++) {
for(j = 0; j < b; j++) {
printf("%4d", m1[i][j]);
}
printf("\n");
}

printf("\nSegunda matriz:\n");
for(i = 0; i < c; i++) {
for(j = 0; j < d; j++) {
printf("%4d", m2[i][j]);
}
printf("\n");
}

printf("\nMatriz produto:\n");
for(i = 0; i < a; i++) {
for(j = 0; j < d; j++) {
printf("%4d", produto[i][j]);
}
printf("\n");
}

for(i = 0; i < a; i++) {
free(m1[i]);
}
free(m1);

for(i = 0; i < c; i++) {
free(m2[i]);
}
free(m2);

for(i = 0; i < a; i++) {
free(produto[i]);
}
free(produto);

return 0;
}