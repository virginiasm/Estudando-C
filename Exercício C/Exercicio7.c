/* Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius. A fórmula 
de conversão é: C = 5.0 * (F - 32.0)/9.0, sendo C a temperatura em Celsius e F a temperatura em Fahrenheit. */

#include <stdio.h>
int main(){

float fahrenheit, c;

printf("Digite a temperatura em Fahrenheit:\n");
scanf("%f",&fahrenheit);

c = (5.0 * (fahrenheit - 32.0))/9.0;

printf("A temperatura em graus Celsius: %.2f.",c);

}