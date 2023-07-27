/*
Write a program that receives a vector with 10 positions from the user. Next, the largest and smallest element of the vector must be printed.
*/

#include <stdio.h>

int main(){

    int vector[10];
    int largest, smallest;

    printf("Enter 10 elements\n");
    for(int i = 0; i < 10; i++){
        scanf("%d",&vector[i]);
    }

    largest=vector[0];
    smallest=vector[0];

    for(int i = 0; i < 10; i++){
        if(vector[i] > largest){
            largest = vector[i];
        }
    }

    for(int i = 0; i < 10; i++){
        if(vector[i] < smallest){
            smallest = vector[i];
        }
    }

    printf(" largest: %d\n", largest);
    printf(" smallest: %d\n", smallest);
    
    return 0;
}