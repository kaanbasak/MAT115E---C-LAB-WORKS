#include <stdio.h>
#include <math.h>

int main(){
char x1,y1,x2,y2;
float distance;

printf("enter the first point(x1,y1): ");
scanf("%c %c",&x1,&y1);
getchar();

printf("enter the second point(x2,y2): ");
scanf("%c %c",&x2,&y2);
getchar();

distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
printf("distance: %.3f",distance);


    return 0;
}
