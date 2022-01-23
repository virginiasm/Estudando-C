/* Leia o tamanho do lado de um quadrado e imprima como resultado sua area. */

#include <stdio.h>

int main(){

    int tam_lado, area;

    printf("Digite o tamanho do lado de um quadrado:\n ");
    scanf("%d",&tam_lado);

    area = pow(tam_lado,2);

    printf("O resultado da area do quadrado eh: %d",area);
}