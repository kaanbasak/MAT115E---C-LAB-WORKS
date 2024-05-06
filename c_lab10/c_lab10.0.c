#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char* ptr;
char myLetter;
int i,size,found=0;
ptr = malloc(81 * sizeof(char));

printf("Enter the sentence (80 characters): ");
fgets(ptr, 81, stdin);
puts(ptr);

printf("Enter the letter: ");
scanf("%c",&myLetter);

for (i = 0; i < strlen(ptr) ; i++)
{
    if (myLetter == ptr[i])
    {
        found=1;
        break;
    }
}

printf("Is the letter in the sentence: ");

if (found==1)
{
   printf("Yes ");
}
else 
printf("No ");

free(ptr);

    return 0;
}
