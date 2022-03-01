/* Faça um programa que receba dois números e mostre qual deles é maior. */

#include <stdio.h>

int main(){

    int x,y;

    printf("Primeiro numero:\n");
    scanf("%d",&x);

    printf("Segundo numero:\n");
    scanf("%d",&y);

    if(x > y){
        printf("O numero %d e maior!!",x);
    }
    else if(y > x){
        printf("O numero %d e maior!",y);
    } 
    else{
        printf("Sao iguais!!");
    }
    

}