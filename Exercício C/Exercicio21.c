/* Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fórmula de conversão é:  K = L  * 0.45, 
sendo K a massa em quilogramas e L a massa em libras. */

#include <stdio.h>
int main(){

    float l,k;

    printf("Digite um valor de massa em libras:\n");
    scanf("%f",&l);

    k = (l * 0.45);

    printf("O valor de massa em libras %.2f convertido para quilogramas eh: %.2f.",l,k);
}