/* Faça um programa que tenha uma função que dado um valor numérico de entrada, gere e imprima como saída o número de linhas com pontos
de exclamação, conforme exemplo abaixo (para n = 5)
!
!!
!!!
!!!!
!!!!!
*/
#include <stdio.h>

void geraExclamacao(int n)
{
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("!");
        }
        printf("\n");
    }

}

int main()
{
    int n;

    printf("Valor de entrada:\n");
    scanf("%d",&n);

    geraExclamacao(n);

    return 0;
}