#include <stdio.h>

int main(){
    float n[10];
    for (int i = 0;i < 10;i++){
        printf("%d = %p\n",i,(void *)&n[i]);
    }
}