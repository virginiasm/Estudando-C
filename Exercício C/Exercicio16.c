/* Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros. A fórmula de conversão é:  C =  P * 2.54,
sendo C o comprimento em centímetro e P o comprimento em polegadas. */

#include <stdio.h>
int main(){

    float p,c;

    printf("Digite um valor de comprimento em polegadas:\n");
    scanf("%f",&p);

    c = (p * 2.54);

    printf("O comprimento em polegadas %.2f convertido para centimetros eh: %.2f centimetros.",p,c);
}