#include <stdio.h>

int main()
{
    int n = 1;
    char c = 'A';
    float f = 5.5;
    
    int *pint;
    char *pchar;
    float *pfloat;
    
    pint = &n;
    pchar = &c;
    pfloat = &f;
    
    *pint = 2;
    *pchar = 'b';
    *pfloat = 4.5;
    
    printf("%d  %c  %f",n,c,f);
}