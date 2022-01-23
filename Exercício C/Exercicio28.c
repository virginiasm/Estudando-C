/* Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos três valores lidos.*/

#include <stdio.h>
int main(){

    int n1 = 2;
    int n2 = 3;
    int n3 = 4;
    int res1,res2,res3,result;

    res1 = pow(n1,2);
    res2 = pow(n2,2);
    res3 = pow(n3,2);

    result = res1 + res2 + res3;

    printf("O resutado da soma eh dos quadrados de %d, %d, %d eh: %d",n1,n2,n3,result);
}