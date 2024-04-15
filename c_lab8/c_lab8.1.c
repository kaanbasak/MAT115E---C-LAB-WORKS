#include <stdio.h>

int main() {
    int n;
    int i,j;
    printf("enter the size of the image: ");
    scanf("%d", &n);

    int myMatrix[n][n], sum[n];
    printf("enter the elements (0 or 1) of the image (%dx%d): ", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &myMatrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        sum[i] = 0;
        for (j = 0; j < n; j++) {
            sum[i] += myMatrix[i][j];
        }
    }

    printf("the hist array of the image: ");
    for (i = 0; i < n; i++) {
        printf("%d ", sum[i]);
    }
    printf("\n");

    int check = 0;
    for (i = 0; i < n; i++) {
        check += sum[i];
    }
    if (check > (n * n) / 2) {
        printf("the object takes up more than half of the image space");
    } else
        printf("the object does not take up more than half of the image space");

    return 0;
}