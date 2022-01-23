/* Sejam 𝑎 e 𝑏 os catetos de um triângulo, onde a hipotenusa é obtida pela equação:
ℎ𝑖𝑝𝑜𝑡𝑒𝑛𝑢𝑠𝑎 = √𝑎2 + 𝑏2. Faça um programa que receba os valores de 𝑎 e 𝑏 e encontre o
valor da hipotenusa através da equação. Imprima no final o resultado dessa operação. */

/* sqrt = raiz quadrada */

#include <stdio.h>
#include <math.h>

int main(){

    int a,b;
    float hipotenusa;

    printf("Digite dois numeros:\n ");
    scanf("%d%d",&a,&b);

    hipotenusa = sqrt(pow(a,2)+pow(b,2));

    printf("O resultado: %.2f",hipotenusa);


}