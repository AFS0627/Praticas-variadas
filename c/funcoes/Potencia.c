/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int potencia (int base, int expoente){
        int soma=base;
        for(int i=1;i<expoente;i++){
            soma = soma*base;
        }
        return soma;
    }
    
    int base,expoente,resultado;
printf("digite a base: ");
scanf("%i", & base);
printf("\ndigite o expoente: ");
scanf("%i", & expoente);
resultado = potencia(base,expoente);
printf("\nResultado: %i ",resultado);
}