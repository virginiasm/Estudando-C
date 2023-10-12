/*Faça uma função que receba 3 números inteiros como parâmetro, representando horas, minutos e segundos, e os converta em segundos.*/

#include <stdio.h>

int ConverterSeconds(int hora, int minutos, int segundos){
    return (hora*3600) + (minutos*60) + segundos;
}
int main(){
    int hora, minuto, segundos;
    int result;
    printf("Digite a hora:\n");
    scanf("%d",&hora);
    printf("Digite o minuto:\n");
    scanf("%d",&minuto);
    printf("Digite os segundos:\n");
    scanf("%d",&segundos);

    result = ConverterSeconds(hora, minuto, segundos);

    printf("Total em segundos: %d\n", result);



}