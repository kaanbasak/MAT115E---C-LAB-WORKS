#include <stdlib.h>
#include <stdio.h>

int main()
{
    
float a,b;
printf("enter the value A (A should not equal to 0): ");
scanf("%f", &a);

b = (a - 256)/4.5 + 487.59 / a;

printf("Value B is: %.2f", b);

    return 0;
}
