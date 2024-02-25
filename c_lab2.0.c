#include <stdio.h>
#include <math.h>

int main(){
char ch1,ch2;
float sum;

printf("enter the first character: ");
ch1 = getchar();
getchar();
printf("enter the second character: ");
ch2 = getchar();

sum = sqrt(ch1 * ch2);

printf("geometric mean is %.2f",sum);


    return 0;
}