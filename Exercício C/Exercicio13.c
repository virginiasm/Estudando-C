/* Leia uma distância em quilômetros e apresente-a convertida em milhas. A fórmula de conversão é: M = K/1.61, sendo 
k a distância em quilômetros e M em milhas. */

#include <stdio.h>

int main(){

    float m, k;

    printf("Digite uma distância em quilômetros:\n");
    scanf("%f",&k);

    m = (k/1.61);

    printf("A conversao para milhas: %.2f.", m);
}