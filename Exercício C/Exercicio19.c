/* Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m³ . A fórmula de conversão é: M  = L/1000,
sendo L o volume em litros e M o volume em metros cúbicos. */

#include <stdio.h>
int main(){

    float l,m;

        printf("Digite o valor em volume em litros:\n");
    scanf("%f",&l);

    m = (l/1000);

    printf("Volume em litros %.2f convertido para metros cúbicos eh: %.2f.",l,m);
}