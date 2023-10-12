/*Faça uma função que receba a altura e o raio de um cilindro circular e retorne o volume do colindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula: V = pi * raio² * altura, onde pi = 3.141592.*/

#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

double calculoVolumeCilindroCircular(double altura, double raio){
    double volume = PI * (raio*raio) * altura;
    return volume;
}
int main(){
    double altura, raio;

    printf("Digite a altura:\n");
    scanf("%lf", &altura);
    printf("Digite o raio:\n");
    scanf("%lf", &raio);

    double vol = calculoVolumeCilindroCircular(altura, raio);

    printf("Volume: %lf\n", vol);



}