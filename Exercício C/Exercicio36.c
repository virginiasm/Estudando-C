/* Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume de um cilindro circular é calculado 
por meio da seguinte formula: V= pi * raio2 * altura, onde pi = 3.141592. */

#include <stdio.h>
int main(){

    int altura = 4, raio = 2;
    float v;


    v = 3.14*sqrt(pow(raio,2))*altura;

    printf("O resultado do volume do cilindro circular eh: %.2f",v);
    }