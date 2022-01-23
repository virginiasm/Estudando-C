/* Peça ao usuário para digitar três valores inteiros e imprima a soma deles */

#include <stdio.h>

int main(){

    int n1, n2, n3;
    int res;

    printf("Digite três numero inteiros:\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    
    res = n1+n2+n3;

    printf("O resultado da soma de: %d+%d+%d = %d",n1,n2,n3,res);

}