/* Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida  em km/h (quilômetros por hora).
A fórmula de conversão é: K = M * 3.6, sendo K a velocidade em km/h e M em m/s. */

#include <stdio.h>

int main(){

    float k, m;

    printf("Digite a velocidade em metros por segundo (m/s):\n");
    scanf("%f",&m);

    k = (m * 3.6);

    printf("A velocidade %.2f m/s em km/h eh: %.2f.",m,k);
}