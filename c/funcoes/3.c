#include <stdio.h>

int main()
{
void CalculaRetangulo (){
float altura,largura;
printf("altura do retangulo: ");
scanf("%f", & altura);
printf("\nlargura do retangulo: ");
scanf("%f", & largura);
printf ("A area do retangulo é %.2f", altura*largura);
}
void CalculaTriangulo (){
  float base,altura;
printf("base do triangulo: ");
scanf("%f", & base );
printf("\naltura do triangulo: ");
scanf("%f", & altura );
printf ("A area do triangulo é %.2f", (altura*base)/2);
    }
    void CalculaCirculo (){
         float raio;
printf("raio do circulo em cm: ");
scanf("%f", & raio );
printf ("A area do triangulo é %.2f", 3.14*(raio*raio));
    }

    int n;
    printf("escolha um para calcula \n 1-retangulo \n 2-triangulo \n 3-circulo\n");
    scanf("%i", & n);
    switch (n){
        case 0:
        break;
        case 1:
        CalculaRetangulo();
        
        break;
        case 2:
        CalculaTriangulo();
        
        break;
        case 3:
        CalculaCirculo();
        
        
        break;
    }
    
}