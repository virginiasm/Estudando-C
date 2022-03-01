/* Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada do número.
Se o número for negativo uma mensagem dizendo que o número é inválido. */

#include <stdio.h>

int main(){

    int n,x;

    printf("Digite um numero:\n");
    scanf("%d",&n);

    if(n > 0)
    {
        x = sqrt(n);
        printf("A raiz quadrada eh: %d.",x);
    }
    else{
        printf("Numero invalido.!\n");
    }
}