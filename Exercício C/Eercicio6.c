/* Leia uma temperatura em graus Celsius e apresente-a covertida em graus Fahrenheit. A fórmula de conversão é: F = C*(9.0/5.0)
+32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius. */

#include <stdio.h>

int main(){

    float celsius, f;

    printf("Digite a temperatura em graus Celsius:\n");
    scanf("%f",&celsius);

    f = (celsius*(9.0/5.0))+32.0;

    printf("A temperatura em Fahrenheit: %.2f \n",f);

}