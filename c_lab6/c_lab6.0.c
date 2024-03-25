#include <stdio.h>
#include <stdlib.h>

void findDigit(int k,int d);

int main(){
int k,d;
findDigit(k,d);

    return 0;
}

void findDigit(int k,int d){

printf("enter integer K: ");
scanf("%d",&k);
printf("enter digit d: ");
scanf("%d",&d);

int position,i;
int j=0;
int max=-1;

for (i = 1; i <= k; i*=10)
{
    position = (k/i) % 10;
    j++;

    if (d == position)
    {
           max = j-1;      
    }

}
printf("The largest position %d appears in %d is %d",d,k,max);

}