#include <stdio.h>

int main() {
    int num1 = 40, num2 = 0;
    int *ptr1, *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    int *temp;

    printf("before pointer1: %d, before pointer2: %d\n", *ptr1, *ptr2);

    temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;

    printf("after pointer1: %d, after pointer2: %d", *ptr1, *ptr2);

    return 0;
}