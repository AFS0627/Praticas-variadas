#include <stdio.h>
struct area{
    int comprimento;
    int largura;
    int area;
};
void calculaArea(struct area *a){
        a->area = a->comprimento * a->largura;

}
int main(){
    struct area a[10];
    int n =10;
    int total = 0;
    for (int i=0;i<n;i++){
        printf("digite comprimento e largura nessa ordem");
        scanf("%d %d",&a[i].comprimento,&a[i].largura);
        calculaArea(&a[i]);
        total += a[i].area;

    }
    
    for (int i=0;i<n;i++){
        printf("\narea: %d",a[i].area);

    }
    printf("\ntotal: %d",total);
}