/* Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A fórmula de conversão é: C = K - 273.15, sendo C
a temperatura em Celsius e K a temperatura em Kelvin. */

#include <stdio.h>

int main(){

    float kelvin, c;

    printf("Digite a temperatura em graus Kelvin:\n");
    scanf("%f",&kelvin);

    c = (kelvin - 273.15);

    printf("A temperatura em graus Celsius: %.2f.",c);

}