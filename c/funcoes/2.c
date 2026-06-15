
#include <stdio.h>

int main()
{
float CalcularKML ( float km, float l){
     float KML = km/l;
    return KML;
}
void mensagem ( float kml){
    if (kml<8){
        printf("Venda o carro!");
    } else if (kml>=8 && kml<12){
        printf("Econômico!");
    }else {
        printf("Super econômico");
        
    }
}
    float km1,l1,kml;
    printf("digite KM: ");
    scanf("%f", & km1);
    printf("digite L: ");
    scanf("%f", & l1);
    kml = CalcularKML(km1,l1);
    mensagem(kml);
}
