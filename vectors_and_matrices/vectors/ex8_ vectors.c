/*
Create a program that reads 6 integer values and then displays the values read in reverse order on the screen.
*/

#include <stdio.h>

int main(){

    int vector[6];

    printf("Enter 6 numbers:\n");

    for (int i=0; i < 6; i++){
        scanf("%d",&vector[i]);
    }

    printf("reserve:");
    for(int i = 5; i >= 0; i--){
        printf("%d ", vector[i]);
    }
}