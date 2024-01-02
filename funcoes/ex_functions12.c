/* Faça um programa que tenha uma função que, dado um caractere qualquer de entrada, retorne o mesmo caractere sempre em maiúsculo. */
#include <stdio.h>
#include <ctype.h>

char ConvMaiusculo(char caractere)
{
    char maiusculo = toupper(caractere);

    return maiusculo;
}

int main()
{
    char caractere;

    printf("Digite um caractere: \n");
    scanf("%c",&caractere);

    char result = ConvMaiusculo(caractere);

    printf("Caractere em maiusculo: %c. \n", result);
}