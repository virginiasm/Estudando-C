/*Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação: hipotenusa = raiz(a²+b²). Faça uma função que receba os valores de a e b e calcule o valor da hipotenusa através da equação. */

#include <stdio.h>
#include <math.h>

double hipotenusa(double a, double b){
    double hipotenusa = sqrt(a*a + b*b); // sqrt calcula a raiz quadrada 
    return hipotenusa;
}
int main(){
    double a,b;

    printf("Digite o valor de 'a':\n");
    scanf("%lf",&a);

    printf("Digite o valor de 'b':\n");
    scanf("%lf",&b);

    double hip = hipotenusa(a,b);

    printf("O valor da hipotenusa: %lf\n", hip);

}