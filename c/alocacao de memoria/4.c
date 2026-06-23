#include <stdio.h>
#include <stdlib.h>

char *alocaDinamica(int tamanho){
    return malloc((tamanho+1) * sizeof(char));
    
}

int main(){
    int tamanho;
    char *string;
    printf("digite o tamanho da string:");
    scanf("%d",&tamanho);
    string = alocaDinamica(tamanho);
    printf("\ndigite a string: ");
    scanf(" %[^\n]",string);
    for (int i = 0; string[i] != '\0'; i++){
        if(string[i] != 'a' && string[i] != 'e'  && string[i] != 'i' && string[i] != 'o' && string[i] != 'u'
        && string[i] != 'A' && string[i] != 'E' && string[i] != 'I' && string[i] != 'O' && string[i] != 'U'){
            printf("%c",string[i]);
        }
    }

}