#include <stdio.h>
#include <stdlib.h>

struct comp1 {
    float real1;
    float image1;
};

struct comp2 {
    float real2;
    float image2;
};

struct result {
    float resultReal;
    float resultImage;
};

int main() {
    struct comp1 *n1 = malloc(sizeof(struct comp1));
    struct comp2 *n2 = malloc(sizeof(struct comp2));
    struct result n3;

    if (n1 == NULL || n2 == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    n1->real1 = 0.5;
    n1->image1 = 2;
    n2->real2 = 2;
    n2->image2 = -0.5;

    n3.resultReal = (n1->real1 * n2->real2) - (n1->image1 * n2->image2);
    n3.resultImage = (n1->real1 * n2->image2) + (n2->real2 * n1->image1);

    printf("%.f + %.2fi", n3.resultReal, n3.resultImage);

    free(n1);
    free(n2);

    return 0;
}
