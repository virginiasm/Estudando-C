/* Faça um programa que leia um número inteiro positivo de três dígitos(de 100 a 999).Gere outro número formado pelos dígitos 
invertidos do número lido. */

#include <stdio.h>

int main()
{
    int num_lido, p_numero, s_numero, t_numero, p,s;

    printf("Informe os tres digitos a serem invertidos(de 100 a 999):\n");
    scanf("%d",&num_lido);

    p_numero = num_lido/100;
    p = p_numero;
    s_numero = (num_lido/10) - (p * 10);
    s = s_numero;
    t_numero = num_lido - (p*100) - (s*10);

    printf("Invertido: %d%d%d",t_numero, s, p);
}