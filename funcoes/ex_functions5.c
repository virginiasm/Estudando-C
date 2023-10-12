/*Faça uma função e um programa teste para o cálculo do volume de uma esfera. Sendo que o raio é passado por parâmetro. V = 4/3*PI*R3*/
#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

double calcular_volume_esfera(double raio) {
    if (raio < 0) {
        return -1; // Retorna um valor negativo para indicar erro
    }

    double volume = (4.0/3.0) * PI * pow(raio, 3);
    return volume;
}

int main() {
    double raio;
    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);
    
    double volume = calcular_volume_esfera(raio);

    if (volume >= 0) {
        printf("O volume da esfera com raio %.2f é %.2f unidades cúbicas.\n", raio, volume);
    } else {
        printf("O raio não pode ser um valor negativo.\n");
    }

    return 0;
}
