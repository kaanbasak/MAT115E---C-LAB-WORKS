#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592

struct rectangle
{
    float rectangle_side1;
    int rectangle_side2;
    float result1;
};

struct triangle
{
    int triangle_side1;
    int triangle_side2;
    int triangle_side3;
    float result2;
    float u;
};

struct ellipse
{
    int ellipse1;
    int ellipse2;
    float result3;
};

int main(){

struct rectangle r1;
struct triangle t1;
struct ellipse e1;

r1.rectangle_side1 = 2.5;
r1.rectangle_side2 = 4;
r1.result1 = r1.rectangle_side1 * r1.rectangle_side2;
printf("Area of the rectangle: %f\n",r1.result1);

t1.triangle_side1 = 4;
t1.triangle_side2 = 5;
t1.triangle_side3 = 6;
t1.u = (t1.triangle_side1 + t1.triangle_side2 + t1.triangle_side3)/2.0;
t1.result2 =sqrt(t1.u * (t1.u - t1.triangle_side1) *  (t1.u - t1.triangle_side2) * (t1.u - t1.triangle_side3));
printf("Area of the triangle: %f\n",t1.result2);

e1.ellipse1 = 2;
e1.ellipse2 = 3;
e1.result3 = PI * e1.ellipse1 * e1.ellipse2;
printf("Area of the ellipse: %f\n",e1.result3);


    return 0;
}