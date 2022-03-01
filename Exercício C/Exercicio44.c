/* Receba a altura de um degrau de uma escada e a altura que o usuário deseja alcançar subindo a escada. Calcule e mostre quantos 
degraus o usuário deverá subir para atingir seu objetivo. */

#include <stdio.h>

int main(){

    float alt_usuario, res, alt_degrau;

    printf("Informe a altura do degrau, em centimetros:\n");
    scanf("%f",&alt_degrau);
    printf("Altura em centimetros que deseja alcancar:\n");
    scanf("%f",&alt_usuario);

    res = alt_usuario/alt_degrau;

    printf("Você devera subir %.2f degraus para atingir seu objetivo.",res);


}