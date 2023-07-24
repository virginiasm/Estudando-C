/*
Make a program that has a vector named "A" that stores 6 integers. The program must perform the following steps:

(a) Assign the following values to this vector: 1, 0, 5, -2, -5, 7.
(b) Store in an integer variable (simple) the sum between the values of positions A[0], A[1] and A[5] of the vector and show this sum on the screen.
(c) Modify the vector at position 4, assigning this position the value 100.
(d) Display each value of vector A on the screen, one on each line.
*/

#include <stdio.h>

int main(){

//(a) Assign the following values to this vector: 1, 0, 5, -2, -5, 7.
    int A[6];

    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;

// (b) Store in an integer variable (simple) the sum between the values of positions A[0], A[1] and A[5] of the vector and show this sum on the screen.
    int sum = 0;
    sum = A[0] + A[1] + A[5];
    printf(" The sum between A[%d] + A[%d] + A[%d] = %d\n", A[0], A[1], A[5], sum);

// (c) Modify the vector at position 4, assigning this position the value 100.

    A[4] = 100;

//(d) Display each value of vector A on the screen, one on each line.

    printf("Values of vector A:\n");
    for(int i = 0; i < 6; i++){
        printf(" %d\n ", A[i]);
    }

}