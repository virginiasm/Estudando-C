/* Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual. */

#include <stdio.h>

int main(){

    int idade, ano_atual, res;

    printf("Qual a sua idade:\n");
    scanf("%d",&idade);
    printf("Ano atual:\n");
    scanf("%d",&ano_atual);

    res = ano_atual - idade;

    printf("No ano atual %d, voce tem %d anos e nasceu no ano de %d",ano_atual,idade,res);
}