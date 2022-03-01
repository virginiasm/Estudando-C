/* Faça um programa para ler as dimensões de um terreno (comprimento c e largura l), bem como o preço do metro de tela p.
Imprima  o custo para cercar este mesmo terreno com tela. */

#include <stdio.h>

int main(){

    float c, l, p,custo;

    printf("Comprimento:\n");
    scanf("%f",&c);
    printf("Largura:\n");
    scanf("%f",&l);
    printf("Valo do metro da tela:\n");
    scanf("%f",&p);

    custo = c * l * p;

    printf("O custo para cercar o terreno eh R$ %.2f . \n",custo);

}

