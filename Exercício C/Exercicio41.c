/* Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas trabalhadas no mês.
Imprima o valor a ser pago ao funcionário, adicionando 10% sobre o valor calculado. */

#include <stdio.h>
int main(){

    float horas_trabalhadas, valor_hora = 10, total, total_10, total_a_receber;

    printf("O funcionario recebe por hora R$: 10,00.\n");
    printf("Quantas horas voce trabalhou no mes:\n");
    scanf("%f",&horas_trabalhadas);

    total = (valor_hora * horas_trabalhadas);
    total_10 = total * 0.10;
    total_a_receber = total + total_10;

    printf("Salario: %.2f\n",total_a_receber);
    printf("\n\n");  
}