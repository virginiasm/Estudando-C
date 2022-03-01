/* Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos. */

#include <stdio.h>

int main()
{

    int num, num2, h,s,m;
    printf("Informe os segundos:\n");
    scanf("%d",&num);

    h = num/3600;
    num2 = num % 3600; 
    m = num2/60;
    s = num2%60;

    printf("%d:%d:%d",h,m,s);

}