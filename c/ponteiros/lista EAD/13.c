 #include <stdio.h>

 int ocorre(char *c1,char *c2){
        char *p1, *p2, *inicio;

    while (*c1 != '\0') {
        inicio = c1;
        p2 = c2;

        while (*inicio == *p2 && *p2 != '\0') {
            inicio++;
            p2++;
        }

        if (*p2 == '\0') {
            return 1; 
        }

        c1++;
    }

    return 0;
}
int main(){
    char c1[100];
    char c2[100];

    scanf(" %[^\n]",c1);
    scanf(" %[^\n]",c2);
    if(ocorre(c1,c2)){
        printf("a segunda string ocorre na primeira");
    }else{
        printf("a segunda string não ocorre na primeira");
    }
}