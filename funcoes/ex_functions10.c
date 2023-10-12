/*Faça uma função que receba dois números e retorne qual deles é o maior.*/

#include <stdio.h>

int maiorNumero(int num1, int num2){
    int maior;

    if(num1 > num2){
        maior = num1;
    }else{
        maior = num2;
    }

    return maior;
}
int main(){

    int num1, num2, result;

    printf("Digite o primeiro numero:\n");
    scanf("%d",&num1);

    printf("Digite o segundo numero:\n");
    scanf("%d",&num2);

    result = maiorNumero(num1, num2);

    printf("O numero %d é maior.!!\n", result);
}