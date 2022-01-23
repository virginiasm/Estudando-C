/* Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula de conversão é: g = r * 180/pi, sendo g  o ângulo
em graus e r em radianos  e pi = 3.14. */

#include <stdio.h>
int main(){

    float r,g;
    float pi = 3.14;

    printf("Digite um ângulo em radianos: \n");
    scanf("%f",&r);

    g = ((r * 180)/pi);

    printf("O ângulo em radianos %.2f convertido para graus eh: %.2f",r,g);
}