/*Faça uma função que receba a data atual (dia,mês e ano em inteiro) e exiba-a na tela no formato textual por extenso. Exemplo 
Data: 01/01/2000: 1 de janeiro de 2000.*/
#include <stdio.h>


void dataPorExtenso(int dia, int mes, int ano){
switch (mes)
{
case 1:
    printf("%d de janeiro de %d",dia, ano);
    break;
case 2:
    printf("%d de fevereiro de %d",dia, ano);
    break;

case 3:
    printf("%d de marco de %d",dia, ano);
    break;

case 4:
    printf("%d de abril de %d",dia, ano);
    break;

case 5:
    printf("%d de maio de %d",dia, ano);
    break;

case 6:
    printf("%d de junho de %d",dia, ano);
    break;

case 7:
    printf("%d de julho de %d",dia, ano);
    break;

case 8:
    printf("%d de agosto de %d",dia, ano);

break;

case 9:
    printf("%d de setembro de %d",dia, ano);
    break;

case 10:
    printf("%d de outubro de %d",dia, ano);
    break;

case 11:
    printf("%d de novembro de %d",dia, ano);
break;

case 12:
    printf("%d de dezembro de %d",dia, ano);
break;

default:
    printf("invalido %d, %d, %d",dia,mes, ano);
    break;
}
}
int main(){
    int dia, mes, ano;

    printf("Exibir a data por extenso.\n");
    printf("Digite o dia:\n");
    scanf("%d",&dia);
    printf("Digite o mes:\n");
    scanf("%d",&mes);
    printf("Digite o ano:\n");
    scanf("%d",&ano);

    dataPorExtenso(dia, mes, ano);
}