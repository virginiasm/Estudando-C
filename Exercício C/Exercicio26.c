/* Leia um valor de área em metros quadrados m² e apresente-o convertido em hectares. A fórmula  de conversão é: 
H = M * 0,0001, sendo M a área em metros quadrados e H a área em hectares. */

#include <stdio.h>
int main(){

    float h,m;

    printf("Digite um valor em metros quadrados:\n");
    scanf("%f",&m);

    h = (m * 0.0001);

    printf("O valor de área em metros quadrados %.2f convertido para hectares eh: %f.",m,h);
}