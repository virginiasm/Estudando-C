/* Leia um valor de comprimento em jardas e apresente-o convertido em metros. A fórmula de conversão é: M = 0.91 * J, sendo J
o comprimentro em jardas e M o comprimento em metros. */

#include <stdio.h>
int main(){

    float j,m;

    printf("Digite um valor de comprimento em jardas:\n");
    scanf("%f",&j);

    m = (0.91 * j);

    printf("O comprimento em jardas %.2f convertido para metros eh: %.2f.", j,m);
}