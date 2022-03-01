/* Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido proporcionalmente ao valor que cada
deu para a realização da aposta. Faça um programa que leia quanto cada apostador investiu, o valor do prêmio, e imprima quanto 
cada um ganharia do prêmio com base no valor investido. */

#include <stdio.h>

int main(){

    float jogador1, jogador2, jogador3, premio, p1, p2, p3, j1_recebe, j2_recebe, j3_recebe, aposta_total;

    printf("Valor do premio:\n");
    scanf("%f",&premio);

    printf("Jogador 1:\n");
    scanf("%f",&jogador1);
    printf("Jogador 2:\n");
    scanf("%f",&jogador2);
    printf("Jogador 3:\n");
    scanf("%f",&jogador3);

    aposta_total = jogador1 + jogador2 + jogador3;
    
    p1 = jogador1/aposta_total;
    p2 = jogador2/aposta_total;
    p3 = jogador3/aposta_total;

    j1_recebe = premio * p1;
    j2_recebe = premio * p2;
    j3_recebe = premio * p3;

    printf("O jogando 1 recebe R$:%.2f.\n",j1_recebe);
    printf("O jogando 2 recebe R$:%.2f.\n",j2_recebe);
    printf("O jogando 3 recebe R$:%.2f.\n",j3_recebe);



    

}