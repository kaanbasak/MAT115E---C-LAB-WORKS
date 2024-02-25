#include <stdlib.h>
#include <stdio.h>

int main()
{
float driven,costGasoline,averageMiles,fees,tolls;
float sum;

printf("total miles driven per day: ");
scanf("%f", &driven);

printf("cost per gallon of gasoline: ");
scanf("%f", &costGasoline);

printf("average miles per gallon: ");
scanf("%f", &averageMiles);

printf("parking fees per day: ");
scanf("%f", &fees);

printf("tolls per day: ");
scanf("%f", &tolls);

sum = fees + tolls + (driven/averageMiles) * costGasoline;

printf("sum is %f: ",sum);

    return 0;
}
