/* 
Create a program that reads 6 integer values and then displays the read values on the screen.
*/

#include <stdio.h>

int main(){

    int vector[6];

    // Reading 6 integer values from the user
    printf("Enter 6 integer values:\n");
    for(int i = 0; i < 6; i++){
        scanf("%d", &vector[i]);
    }
    
    printf("Read values:\n");
    for(int i = 0; i < 6; i++){
        printf("Results: %d\n", vector[i]);
    }

    return 0;
}