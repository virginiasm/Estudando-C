/* Leia um numero inteiro e imprima o seu antecessor e o seu sucessor. */

#include <stdio.h>
int main(){

    int n, ante, suc;

    printf("Digite um numero inteiro:\n");
    scanf("%d",&n);

    ante = n - 1;
    suc =  n + 1;

    printf("O numero %d tem como antecessor %d e seu sucessor %d.",n,ante,suc);
}