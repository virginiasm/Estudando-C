/* Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela ASCII para resolver o problema */

#include <stdio.h>
#include <string.h>

int main(){

    char letra;

    printf("Programa converte letra maiuscula em letra minuscula:\n");
    scanf("%c",&letra);

    printf("Minuscula: %c",tolower(letra));

}