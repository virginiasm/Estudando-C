/*  Leia um valor de volume em metros cúbicos m³ e apresente-o convertido em litros. A fórmula de conversão é: L = 1000 * M, 
sendo L o volume em litros e M o volume em metros cúbicos. */ 
 
#include <stdio.h>
int main(){

    float l,m;

    printf("Digite o valor em volume em metros cúbicos:\n");
    scanf("%f",&m);

    l = (1000 * m);

    printf("Volume %.2f metros cúbicos convertido para litros eh: %.2f.",m,l);
}