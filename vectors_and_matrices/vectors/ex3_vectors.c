/*
Read a set of real numbers, storing it in a vector and calculate the square of the components of this vector, storing the result in another vector. Sets have 10 elements each. Print all sets.

*/

#include <stdio.h>

int main(){

    float vector[10] = {12.4,11.6,10.5,20.4,4.5,5.5,3.3,8.9,11.6,10.9};
    float square[10];

    int cont = 0;
    for(int i = 0; i < 10; i++){
        square[cont] = vector[i] * vector[i];
        cont++;
    }

    for(int i = 0; i < 10; i++){      
        printf("The square of %.2f is: %.2f\n", vector[i], square[i]);
    }
    return 0;
}