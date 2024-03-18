#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void TriangleType(float side1, float side2, float side3);

int main(){
float side1,side2,side3;
TriangleType(side1,side2,side3);
    return 0;
}

void TriangleType(float side1, float side2, float side3){
printf("enter the sides of triangle: ");
scanf("%f %f %f",&side1,&side2,&side3);

if (fabs(side1 - side2) < side3 && side3 < (side1 + side2) && fabs(side1 - side3) < side2 && side2 < (side1 + side3) && fabs(side3 - side2) < side1 && side1 < (side3 + side2))
{
    if (side1 == side2 && side2 == side3)
{
    printf("equilateral triangle ");
}
else if (side1 != side2 && side2 != side3 && side1 != side3)
{
    printf("scalene triangle ");
}
else 
printf("isosceles triangle ");
}
else
printf("invalid ");
}