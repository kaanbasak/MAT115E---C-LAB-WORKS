// Ünal Kaan Başak 
// 090220310

#include <stdio.h>
#include <stdlib.h>
#define SIZE 9

int main() {
    int studentNumber[SIZE] = {0, 9, 0, 2, 2, 0, 3, 1, 0};
    int i, evenSum = 0, oddSum = 0;
    char textChar;
    int evenAscii[1000], oddAscii[1000];
    int evenIndex = 0, oddIndex = 0;

    FILE* evenPtr;
    evenPtr = fopen("even.txt", "w");
    FILE* oddPtr;
    oddPtr = fopen("odd.txt", "w");
    FILE* textPtr;
    textPtr = fopen("text.txt", "r");

    if (evenPtr == NULL || oddPtr == NULL || textPtr == NULL) {
        printf("Error opening file");
    }

    printf("Student number array: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d", studentNumber[i]);
    }
    printf("\n");

    for (i = 0; i < SIZE; i++) {
        if (studentNumber[i] % 2 == 0) {
            fprintf(evenPtr, "%d ", studentNumber[i]);
            evenSum += studentNumber[i];
        } else {
            fprintf(oddPtr, "%d ", studentNumber[i]);
            oddSum += studentNumber[i];
        }
    }

    while ((textChar = fgetc(textPtr)) != EOF) {
        if ((textChar >= 'a' && textChar <= 'z') || (textChar >= 'A' && textChar <= 'Z')) {
            if ((int)textChar % 2 == 0) 
            {
                evenAscii[evenIndex] = (int)textChar;
                evenIndex++;
            }
            else
            {
                oddAscii[oddIndex] = (int)textChar;
                oddIndex++;
            }
        }
    }

    fprintf(evenPtr, "%d\n", evenSum);
    fprintf(oddPtr, "%d\n", oddSum);

    for (i = 0; i < evenIndex; i++) {
        fprintf(evenPtr, "%d ", evenAscii[i]);
    }

    for (i = 0; i < oddIndex; i++) {
        fprintf(oddPtr, "%d ", oddAscii[i]);
    }
    

    fclose(evenPtr);
    fclose(oddPtr);
    fclose(textPtr);

    return 0;
}