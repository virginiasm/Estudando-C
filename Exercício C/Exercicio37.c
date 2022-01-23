/*Faça um programa que leia o valor de um produto e imprima o valor de desconto, tendo em vista que o desconto foi de 12%. */
#include <stdio.h>
int main(){

float produto = 15.50;
float total, desconto;

desconto = produto*0.12;
total = produto - desconto;

printf("O valor do produto eh %f e o valor com desconto eh %.2f.",produto,total);

}