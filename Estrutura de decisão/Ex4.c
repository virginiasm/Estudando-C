/* Faça um programa que leia um numero e, caso ele seja positivo, calcule e mostre:
 - o número digitado ao quadrado.
 - A raiz quadrada do número digitado */

 #include <stdio.h>

 int main(){

    int n,x,y;

    printf("Numero:\n");
    scanf("%d",&n);
    
    if(n > 0){
        x = sqrt(n);
        y = pow(n,2);
        printf("%d ao quadrado eh: %d.\nA raiz quadrada de %d eh: %d.\n\n",n,y,n,x);
    }
    else{
        printf("Invalido!!\n\n");
    }


 }