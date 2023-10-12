/*Faça uma função que receba uma temperatura em graus Celsius e retorne-a convertida em graus Fahrenheit. A fórmula de conversão é F = C * (9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/

#include <stdio.h>

double ConverterFahrenheit(double celsius){
    double f = celsius * (9.0  / 5.0) + 32.0;
    return f;
}
int main(){
    double celsius, fahrenheit;

    printf("Digite a temperatura em Celsius:\n");
    scanf("%lf",&celsius);

    fahrenheit = ConverterFahrenheit(celsius); // convert

    printf("Fahrenheit: %.2f\n", fahrenheit);
}