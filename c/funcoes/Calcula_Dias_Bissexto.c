#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    int anonsc,anoatual,calc=0;
printf("nome: ");
scanf("%s", & nome);
printf("ano de nascimento: ");
scanf("%i", & anonsc);
printf("ano atual: ");
scanf("%i", & anoatual);
while (anonsc<=anoatual){
if ((anonsc%4 == 0 && anonsc%100!=0) || (anonsc%4 == 0 && anonsc%100==0 && anonsc%400==0)){
    calc=calc+366;
}else{
    calc=calc+365;
}
anonsc++;


}
printf("%s voce viveu %i dias ",nome,calc);
}
