/* Leia um numero real. Se o número for positivo imprima a raiz quadrada. Do contrário, imprima o número quadrado. */

#include <stdio.h>

int main(){

int n,x,y;

printf("Numero:\n");
scanf("%d",&n);

if(n > 0){
    x = sqrt(n);
    printf("A raiz quadrada: %d.\n",x);
}
else{
    y = pow(n,2);
    printf("O numero ao quadrado: %d.\n",y);
}

}