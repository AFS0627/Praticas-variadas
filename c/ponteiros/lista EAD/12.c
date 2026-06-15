#include <stdio.h>

int ordenar(int *n1,int *n2,int *n3){
    int aux;
    if(*n1 > *n2){
        aux = *n1;
        *n1 = *n2;
        *n2 = aux;
    }
    if(*n1 > *n3){
       aux = *n1;
        *n1 = *n3;
        *n3 = aux; 
    }
    if(*n2 > *n3){
       aux = *n2;
        *n2 = *n3;
        *n3 = aux; 
    }
    if(*n1 == *n2 && *n2 == *n3){
        return 1;
    }else{
        return 0;
    }

}

int main(){
    int n1,n2,n3;
    scanf("%d %d %d",&n1,&n2,&n3);
    int resultado = ordenar(&n1,&n2,&n3);
    if(resultado == 1){
        printf("tudo igual");
    }else{
        printf("\nn1 = %d\nn2 = %d\nn3 = %d",n1,n2,n3);
    }
}