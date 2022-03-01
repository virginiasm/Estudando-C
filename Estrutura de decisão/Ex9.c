/* Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for maior que 20%  do salário imprima:
Empréstimo não concedido, caso contrário imprima: Empréstimo concedido. */

#include <stdio.h>

int main(){

    float salario, emprestimo, salario1,res;

    printf("Informe seu salario:\n");
    scanf("%f",&salario);

    printf("Informe valor do emprestimo:\n");
    scanf("%f",&emprestimo);

    res = salario * 0.2;
    salario1 = res + salario;

    if(salario1 > emprestimo){
        printf("Emprestimo não concedido!!\n");
    }
    else{
        printf("Emprestimo concedido");
    }
}