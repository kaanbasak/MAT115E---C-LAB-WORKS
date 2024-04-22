#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,sum1=0,sum2=0;
printf("Enter the size of the array: ");
scanf("%d",&n);
int* myArray = malloc(n * sizeof(int));

float averageFirstArray,averageExpandedArray;

for ( i = 0; i < n; i++)
{
    if (i % 2 == 0)
    {
        myArray[i] = (19*i + 73) % n;
    }
    else if (i % 2 == 1)
    {
        myArray[i] = (13*i + 94) % n;
    }
    printf("%d ",myArray[i]);
    sum1 += myArray[i];
}
averageFirstArray= (float)sum1/n;
printf("\n");
printf("Average of the First Array is: %.2f\n ",averageFirstArray);

myArray = realloc(myArray,2*n *sizeof(int));

for ( i = n; i < 2 * n; i++)
{
        if (i % 2 == 0)
    {
        myArray[i] = (7*i + 119) % (2*n);
    }
    else if (i % 2 == 1)
    {
        myArray[i] = (11*i + 29) % (2*n);
    }
}

for ( i = 0; i < 2*n; i++)
{
    printf("%d ",myArray[i]);
    sum2 += myArray[i];
}




averageExpandedArray=(float)sum2 / (2*n);
printf("\n");
printf("Average of the Expanded Array is: %.2f\n ",averageExpandedArray);

for (i = 0; i < 2*n; i++)
{
    printf("%p\n",*myArray);
}

free(myArray);

if (averageExpandedArray > averageFirstArray)
{
   printf("Array has maximum average after expanded ");
}
else if (averageFirstArray > averageExpandedArray)
{
 printf("Array has maximum average before expanded ");
}

    return 0;
}