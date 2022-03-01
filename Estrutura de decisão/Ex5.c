/* Faça um programa que receba um numero inteiro e verifique se este numero é par ou impar. */

#include <stdio.h>

int main(){

    int n;

    printf("Numero:\n");
    scanf("%d",&n);

    if(n%2 == 0){
        printf("Numero par!!");
    }
    else{
        printf("Numero impar!!");
    }
}