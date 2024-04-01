#include <stdio.h>
#include <stdlib.h>
#define SIZE 7

int main() {
    int myArray[SIZE];
    int i,j;
    int totalNumber = 0;
    int differentNumber;

    printf("Enter numbers: ");

    for (i = 0; i < SIZE; i++) {
        scanf("%d", &myArray[i]);
        differentNumber = 1; 

        for (j = 0; j < i; j++) {
            if (myArray[i] == myArray[j]) {
                differentNumber = 0; 
                break; 
            }
        }

        if (differentNumber == 1) {
            totalNumber++; 
        }
    }

    printf("Number of different numbers: %d\n", totalNumber);

    return 0;
}