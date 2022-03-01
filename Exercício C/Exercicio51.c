/* Escreva um programa que leia as coordenadas x e y de pontos R² e calcule sua distância da origem (0,0) */

#include <stdio.h>

int main(){

    float x,y, z,d;

    printf("Coordenada x:\n");
    scanf("%f",&x);

    printf("Coordenada y:\n");
    scanf("%f",&y);

    z =  (x*x) + (y*y);
    d = sqrt(z);

    printf("A distancia entre dois pontos no plano R2 eh: %.2f",d);
}