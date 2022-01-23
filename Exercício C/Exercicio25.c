/* Leia um valor de área em acres e apresente-o convertido em metros quadrados m ² . A fórmula de conversão é:
M = A * 4048,58, sendo M a área em metros quadrados e A a área em acres. */

#include <stdio.h>
int main(){

    float m,a;

    printf("Digite um valor de área em acres: \n");
    scanf("%f",&a);

    m = (a * 4048.58);

    printf("A área em acres %.2f convertido para metros quadrados eh: %.2f",a,m);

}