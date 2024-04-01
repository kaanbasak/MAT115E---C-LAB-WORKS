#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int myArray[100];
int i;
srand(time(NULL));

int positive=0;
int negative=0;
int zeros=0;
int min=50;
int position=50;

for (i = 1; i <= 12; i++)
{
    myArray[i] = (rand() % 101) - 50;
    printf("myArray[%d] = %d\n ",i,myArray[i]);

    if (myArray[i] > 0)
    {
    positive++;
    }
    else if (myArray[i] < 0)
    {
    negative++;
    }
    else
    zeros++; 

     while (min > myArray[i])
     {
        min = myArray[i];
        position = i;
     }
     
}


printf("\nthe minimum number: %d\n",min);
printf("the index: %d\n",position);
printf("the number of positives: %d\n",positive);
printf("the number of negatives: %d\n",negative);
printf("the number of zeros: %d",zeros);

return 0;

}