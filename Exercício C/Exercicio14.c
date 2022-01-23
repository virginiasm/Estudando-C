/* Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é: R = G * pi/180,
sendo G o ângulo em graus e R em radianos e pi = 3.14 */

#include <stdio.h>
int main(){

    float g,r;
    float pi = 3.14;

    printf("Digite um ângulo:\n");
    scanf("%f",&g);

    r = ((g* pi)/180);

    printf("O ângulo em graus %.2f convertido para radianos eh: %.2f.",g,r);


}