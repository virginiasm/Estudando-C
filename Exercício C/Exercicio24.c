/* Leia um valor da área em metros quadrados m² e apresente-o convertido em acres. A fórmula de conversão é: A = M * 0,000247, sendo M
a área em metros quadrados e A a área em acres. */

#include <stdio.h>
int main(){

    float m,a;

    printf("Digite um valor de área em metros quadrados: \n");
    scanf("%f",&m);

    a = (m * 0.000247);

    printf("A área em metros quadrados %.2f convertido para acres eh: %.2f",m,a);

}