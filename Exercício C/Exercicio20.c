/* Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula de conversão é L=k/0.45, sendo K
a massa em quilogramas e L massa em libras. */

#include <stdio.h>
int main(){

    float l,k;

    printf("Digite um valor de massa em quilogramas:\n");
    scanf("%f",&k);

    l = (k/0.45);

    printf("O valor de massa em quilogramas %.2f convertido para libras eh: %.2f.",k,l);
}