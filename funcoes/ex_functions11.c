/* Faça um programa que tenha uma função que receba um vetor de inteiros como parâmetro e retorne o maior valor. */

#include <stdio.h>

int valorMaior(int vetor[], int tamanho)
{   
    int maior = vetor[0];
    for(int i = 1; i < tamanho; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }

    return maior;
}

int main()
{
    int vetor[] = {1, 6, 3, 4, 5};

     // Tamanho do vetor
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int result = valorMaior(vetor, tamanho);

    printf(" O valor maior eh: %d. \n", result);

    return 0;
}