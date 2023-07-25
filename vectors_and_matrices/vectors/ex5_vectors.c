/*
Read an array of 10 positions. Count and write how many even values it has.
*/

#include <stdio.h>

int main(){

    int vector[10] = {1,2,3,4,5,6,7,8,9,11};

    int even = 0;
    for(int i=0; i < 10; i++){
        if(vector[i]%2 == 0){
            even++;
        }
    }

    printf("%d numbers is even.\n", even);

}