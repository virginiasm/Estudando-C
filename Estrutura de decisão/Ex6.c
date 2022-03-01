/* Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim como a diferença existente entre ambos; */

#include <stdio.h>

int main(){

    int x,y,n;

    printf(" Primeiro Numero:\n");
    scanf("%d",&x);

    printf(" Segundo Numero:\n");
    scanf("%d",&y);

    if(x > y){
        n = x - y;
        printf("%d eh maior e a diferença entre eles eh %d\n",x,n);
    }
    else{
        n = y - x;
        printf("%d eh maior e a diferença entre eles eh %d\n",y,n);

    }
}