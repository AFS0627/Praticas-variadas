#include <stdio.h>

int main(){
    float n1[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("\n%d,%d = %p",i,j,(void *)&n1[i][j]);
        }
    }
}