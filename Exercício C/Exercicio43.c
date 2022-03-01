/* Escreva um programa de ajuda para os vendedores. A partir de um valor total lido, mostre:
 - o total a pagar com desconto de 10%;
 - o valor de cada parcela, no parcelamento de 3x sem juros;
 - a comissao do vendedor, no caso da venda ser a vista (5% sobre o valor total). */

 #include <stdio.h>
 int main(){

    float preco;

    printf("Qual o preco do produto:\n");
    scanf("%f",&preco);

    float desc = preco * 0.10;
    float novo_preco = preco - desc;

    float parc = novo_preco/3;

    printf("*********************************\n");
    printf("Valor da compra:%.2f\n Valor com desconto:%.2f\n No parcelo fica 3x de %.2f",preco,novo_preco,parc);

    
 }