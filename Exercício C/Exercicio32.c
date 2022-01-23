/* Leia um numero inteiro e imprima a soma do sucessor do seu triplo com o antecessor de seu sobro. */
#include <stdio.h>
int main(){
int n, ante, suc;

    printf("Digite um numero inteiro:\n");
    scanf("%d",&n);

    ante = pow((n - 1),2);
    suc =  pow((n + 1),3);

    printf("O numero %d tem como antecessor de seu dobro %d e seu sucessor com seu triplo %d.",n,ante,suc);

}