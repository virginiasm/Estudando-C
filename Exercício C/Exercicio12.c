/* Leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmula de conversão é: K = 1.61 * M, sendo  K 
a distância em quilômetros e M  em milhas. */

#include <stdio.h>

int main(){

    float k,m;

    printf("Digite a distância em milhas:\n");
    scanf("%f",&m);

    k = (1.61 * m);

    printf("Conversao para km: %.2f.",k);

}