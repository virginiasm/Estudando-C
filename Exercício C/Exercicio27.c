/* Leia um valor de área em hectares e apresente-o convertido em metros quadrados m² . A fórmula de conversão é:  M= h * 10000, sendo
M a área em metros quadrados e H a área em hectares. */

#include <stdio.h>
int main(){

    float h,m;

    printf("Digite um valor de área em hectares:\n");
    scanf("%f",&h);

    m = (h * 10000);

    printf("O valor de área em hectares %.2f convertido para metros quadrados eh: %f.",h,m);
}