#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Maclaurin(int n, double x);

int main() {
	int n;
	double x;
	printf("enter integer n: ");
	scanf("%d",&n);
	printf("enter real number x: ");
	scanf("%lf",&x);

	Maclaurin(n,x);
   
	return 0;
}

void Maclaurin(int n, double x)
{
	int i;
	double sum = 0;
	for(i = 0; i <= n-1; i++)
	{
		int factorial = 1;
		int j;
		if(i == 0 || i == 1)
			{
				factorial = 1;
			}
		else{	
            for(j = 2; j <= i; j++)
		{
			factorial = factorial * j;
		}
	}

		sum += pow(x,i) / factorial;
	}
   
   printf("calculated value: %lf\n",sum);
   printf("real value: %lf",exp(x));
}