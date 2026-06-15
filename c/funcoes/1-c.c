#include <stdio.h>
#include <stdlib.h>

int main()
{
int Intervalo (int1, int2){
int soma = int1+int2;
return soma;
}
void DesenhaLinha (NumLinha){
for (int i=0; i<NumLinha; i++){
    printf("_");
}
}
int n1,n2;

while (n1!=0){
while  (n2!=0){
scanf("%i", & n1);
scanf("%i", & n2);

DesenhaLinha(10);
printf("\n%i", Intervalo(n1,n2));
}}}


