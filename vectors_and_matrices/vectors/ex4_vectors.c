/*
Write a program that reads an array of 8 positions and then also reads any two X and Y values corresponding to two positions in the array. At the end, your program should write the sum of the values found in the respective X and Y positions.
*/

#include <stdio.h>

int main(){

    int vector[8];
    int x,y;

    printf("Enter 8 elements\n");
    for(int i = 0; i < 8; i++){
        scanf("%d",&vector[i]);
    }

    printf("Enter the X and Y positions (0 to 7):\n");
    scanf("%d",&x);
    scanf("%d",&y);

    //  Check if the input positions are within the valid range (0 to 7)
    if(x < 0 || x >= 8 || y < 0 || y >= 8){
        printf("Invalid\n");
        return 1;
    }

    // Calculate and display the sum of values at the respective X and Y positions
    int sum = vector[x] + vector[y];
    printf("Sum of vector[%d] and vector[%d] = %d\n", x, y, sum);

    return 0;
}