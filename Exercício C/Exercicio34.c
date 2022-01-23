/* Leia o valor do raio de um circulo e calcule e imprima a área do círculo correspondente. A área do círculo é pi * raio², considere
pi = 3.141592. */

#include <stdio.h>
int main(){

    int raio = 8;
    float area, pi = 3.141592;

    area = pi * (raio*raio);

    printf("O valor do raio do circulo eh: %d",raio*raio);
    printf("A area do circulo eh: %.2f.",area);

}