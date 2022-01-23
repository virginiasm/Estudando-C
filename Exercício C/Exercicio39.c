/* A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso. Sendo que da quantia total: 

- O primeiro ganhador receberá 46%
- O segundo receberá 32% 
- O terceiro receberá o restante;

Calcule e imprima a quantia ganha por cada um dos ganhadores. */

#include <stdio.h>
int main(){

    float premio = 780000;
    float g1, g2, g3;

    g1 = premio * 0.46;
    g2 = premio * 0.32;
    g3 = premio - g1 - g2;

    printf("O Primeiro: %.2f, Segundo: %.2f Terceiro: %.2f.",g1,g2,g3);

}