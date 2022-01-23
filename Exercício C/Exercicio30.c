/* Leia um valor em real e a cotação do dolar . Em seguida, imprima  o valor correspondente em dólares. */

#include <stdio.h>
int main(){

    float real;
    float dolar;

    printf("Digite o valor em real que gostaria de converter para dolar(valor do dolar dia 31/07/2021 = 5,21):\n");
    scanf("%f",&real);

    dolar = real * 5,21;

    printf("O valor em dolares eh: %f",dolar);
}