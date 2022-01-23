/* Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A fórmula de conversão é: K = C + 273.15,
sendo C a temperatura em Celsius e K a temperatura em Kelvin. */

#include <stdio.h>

int main() {

    float celsius, k;

    printf("Digite a temperatura em graus Celsius:\n");
    scanf("%f",&celsius);

    k = (celsius + 273.15);

    printf("A temperatura em kelvin eh: %.2f",k);
}