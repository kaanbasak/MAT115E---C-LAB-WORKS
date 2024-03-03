#include <stdlib.h>
#include <stdio.h>

int main(){
    char a,b,c;
    float harmonic;
printf("please enter the first character: ");
a = getchar();
printf("please enter the second character: ");
scanf("%c",&b);
b = getchar();
printf("please enter the third character: ");
scanf("%c",&c);
c = getchar();

harmonic = 2.0 / (1.0/a) + (1.0/c);

printf("Harmonic mean of %c and %c is greater than %c: %d",a,c,b,harmonic > b);

    return 0;
}