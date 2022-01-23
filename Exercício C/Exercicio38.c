/* Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que ele recebeu um aumento de 25% */

#include <stdio.h>

int main(){

    float salario = 1000;
    float salario_novo, aumento;

    aumento = salario*0.25;
    salario_novo = aumento + salario;

    printf("O novo salario eh %.2f.",salario_novo);

}