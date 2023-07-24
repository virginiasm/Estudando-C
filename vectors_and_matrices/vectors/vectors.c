#include <stdio.h>

//vectors 

// one-dimensional array


int main(){

    //vectors and strings
    char name[50];
    printf("What is your name?\n");
    gets(name);
    printf("Hello %s\n", name);

    //vectors and characters
    char letters[26];

    int cont = 0;
    for(int i = 97; i <= 122; i++) {
        letters[cont] = i;
        cont = cont + 1;
    }

    // Prints the letters and their values.
    for(int i = 0; i < 26; i++) {
        printf(" %d == %c\n", letters[i], letters[i]);
    }

    //vectors and integers
    int number[5]; // 0...4

    number[0] = 1;
    number[1] = 3;
    number[2] = 5;
    number[3] = 7;
    number[4] = 9;

    //vectors and real numbers
    float values[5];

    for(int i = 0; i < 5; i++) {
        values[i]  = (float)number[i]/(float)2;
        }

    for(int i = 4; i >= 0; i--) {
        printf("%.2f\n", values[i]);
    }

    return 0;
}