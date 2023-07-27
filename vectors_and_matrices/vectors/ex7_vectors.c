/*
Write a program that reads 10 integers and stores them in an array. Print the vector, the largest element and the position it is found.
*/
#include <stdio.h>

int main(){

    int vector[10];
    int largest;
    int pos;

    printf("Enter 10 elements\n");
    for(int i = 0; i < 10; i++){
        scanf("%d",&vector[i]);
    }

    largest=vector[0];

    for(int i = 0; i < 10; i++){
        if(vector[i] > largest){
            largest = vector[i];
            pos = i;	
        }
    }

    printf("\n");
    for(int i = 0; i < 10; i++){
    printf(" %d, ", vector[i]);
    }
    printf("\n");
    printf("largest = %d\n",largest);
    printf("position = %d", pos);

}