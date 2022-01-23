/* Leia um valor de comprimento em centimetros e apresente-o convertido em polegadas. A fórmula de conversão é: 
P = C/2.54, sendo C o comprimento em centimetro e P  o comprimentro em polegadas. */

#include <stdio.h>
int main(){

    float c,p;

    printf("Digite um valor de comprimento em centimetros: \n");
    scanf("%f",&c);

    p = (c/2.54);

    printf("O comprimento em centimentros %.2f convertido para polegadas eh: %.2f.",c,p);
}