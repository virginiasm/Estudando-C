/* Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-se que esse
funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, ele paga 7% de imposto sobre o salário-base. */

#include <stdio.h>
int main(){

    float salario_base, imposto, gratificacao, novo_salario, salfim;

    printf("QUal o salario base do funcionario:\n");
    scanf("%f",&salario_base);

    imposto = salario_base*0.07;
    novo_salario = salario_base - imposto;
    printf("O imposto a ser pago sobre o salario base: %.2f\n", imposto);

    gratificacao = novo_salario *0.05;
    salfim = gratificacao + novo_salario;

    printf("Total a receber: %.2f\n",salfim);


}