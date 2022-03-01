/* Leia um numero inteiro de 4 digitos (de 1000 a 9999) e imprima 1 digito por linha */

#include <stdio.h>

int main() {

    char n[4];

    printf("Informe um numero inteiro de 4 digitos:\n");
    scanf("%s",&n);

    printf("%c\n%c\n%c\n%c",n[0],n[1],n[2],n[3]);


}