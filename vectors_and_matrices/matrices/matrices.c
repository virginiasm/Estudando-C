#include <stdio.h>

//vectors 

// multidimensional array
/*
[00][01][02][03][04]
[10][11][12][13][14]
[20][21][22][23][24]
[30][31][32][33][34]
[40][41][42][43][44]
[lines][columns]

*/

int main(){

    char name[3][50];

    for(int i = 0; i < 3; i++){
        printf("What is your name?\n");
        gets(name[i]);
    }

    for(int i = 0; i < 3; i++){
        printf("Hello %s\n", name[i]);
    }

    int number[2][2];

    number[0][0] = 1;
    number[0][1] = 2;
    number[1][0] = 3;
    number[1][1] = 4;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Number[%d][%d] = %d\n", i, j, number[i][j]);
        }
    }
   return 0;
}