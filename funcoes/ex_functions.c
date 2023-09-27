/* Crie uma função que recebe como parâmetro um número inteiro e devolve o seu dobro*/
#include <stdio.h>

int dobro(int numero){
    return numero *2;
}

int main(){
    int numero = 2;
    int result  = dobro(numero);
    printf("O dobro de %d eh %d\n", numero, result);
}
