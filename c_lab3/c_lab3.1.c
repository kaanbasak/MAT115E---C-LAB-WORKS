#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592

int main(){
float a,b,c,d;
float gama,alpha,beta;
a = 5;
b = 7;
gama = 55 * PI / 180;

c = sqrt (pow(a,2) + pow (b,2) - 2 * a * b * cos(gama));

printf("c: %.2f\n",c);

alpha = asin( sin(gama) * a / c);

beta = asin( sin(gama) * b / c);

printf("gama: %.2f\n",gama * 180 / PI);
printf("alpha: %.2f\n",alpha * 180 / PI);
printf("beta: %.2f",beta * 180 / PI);


    return 0;
}