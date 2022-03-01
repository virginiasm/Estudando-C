/* Faça um programa que receba dois números e mostre qual o maior. Se por acaso, os dois números forem iguais, 
imprima a mensagem: Números iguais. */

#include <stdio.h>

int main(){

    int x,y,n;

    printf("Primeiro Numero:\n");
    scanf("%d",&x);

    printf("Segundo Numero:\n");
    scanf("%d",&y);

    if(x > y){

        printf("%d eh maior.\n",x);
    }
    else if(y > x){

        printf("%d eh maior.\n",y);
    }
    else{
        printf("Numeros iguais!!\n");
    }
}