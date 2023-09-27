/*Faça uma função para verificar se o numero é positivo ou negativo. Sendo que o valor de retorno será 1 se positivo, -1
se negativo e 0 se for igual a 0.*/

#include <stdio.h>

int verificarNumero(int numero){
    if(numero > 0){
        return 1;
    }
    else if(numero < 0){
        return -1;
    }
    else{
        return 0;
    }
}
int main(){
    int numero;
    printf("Verificar se é positivo, negativo ou zero.\n");
    printf("Digite o numero:\n");
    scanf("%d",&numero);

    int result = verificarNumero(numero);

    if(result == 1){
        printf("Numero positivo\n");
    }
    else if(result == -1){
        printf("Numero negativo\n");
    }
    else{
        printf("Numero eh igual a 0\n");
    }
    return 0;
}