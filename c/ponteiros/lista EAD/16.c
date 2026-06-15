#include <stdio.h>

int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int *parray = array;
    int *fim = parray + 10;
    int *inicio = parray;
    
    while(parray < fim){
        *parray = *parray +1;
        parray++;
    }
    parray = inicio;
    while(parray < fim){
        printf("\n%d",*parray);
        parray++;
    }

}