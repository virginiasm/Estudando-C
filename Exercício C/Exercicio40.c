/*Uma empresa contrata um encanador a R$30,00 por dia. Faça um programa que solicite o número de dias trabalhados pelo encanador
e imprima a quantia líquida que deverá ser paga, sabendo-se que são descontados 8% para o imposto de renda. */

#include <stdio.h>
int main(){

    int total_dias;
    float valor, total, desconto;

    printf("Digite o numero de dias trabalhados:\n");
    scanf("%d",&total_dias);

    valor = 30.00 * total_dias;
    desconto = valor * 0.08;
    total = valor - desconto;

    printf("O valor a ser pago eh: %.2f",total);

}