#include <stdio.h>
#include <stdlib.h>

void myFunction(int myNumber);

int main(){
int myNumber;
myFunction(myNumber);

    return 0;
}

void myFunction(int myNumber){
printf("please enter a number: ");
scanf("%d",&myNumber);
if (myNumber == 4 || myNumber == 5 || myNumber == 6)
{
   switch (myNumber)
{
case 4:
printf("four ");
    break;
case 5:
printf("five ");
    break;
case 6:
printf("six ");
default:
    break;
}
}
else if (myNumber % 2 == 0)
{
    printf("even number ");
}
else 
    printf("odd number ");

}