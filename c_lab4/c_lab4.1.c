#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
void triangleCheck(float edge1, float edge2, float edge3, float sum);

int main(){
float edge1, edge2, edge3, sum;
triangleCheck(edge1,edge2,edge3,sum);

    return 0;
}
void triangleCheck(float edge1, float edge2, float edge3, float sum){

srand(time(NULL));
edge1 = (rand() % 8) + 3;
edge2 = (rand() % 8) + 3;
edge3 = (rand() % 8) + 3;

printf(" edge1: %.f\n edge2: %.f\n edge3: %.f\n",edge1,edge2,edge3);
sum = fabs(edge1 - edge2) < edge3 && edge3 < (edge1 + edge2) && fabs(edge1 - edge3) < edge2 && edge2 < (edge1 + edge3) && fabs(edge3 - edge2) < edge1 && edge1 < (edge3 + edge2);
printf("Do these wires form a triangle? %.f ",sum);

}
