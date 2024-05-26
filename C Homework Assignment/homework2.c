// Ünal Kaan Başak 
// 090220310

#include <stdio.h>
#include <stdlib.h>

void myFunction(char myChar);

int main(){

FILE* vowelPtr;
vowelPtr = fopen("text.txt","r");

int vowelSum = 0;
char textChar,myChar;

while ((textChar = fgetc(vowelPtr)) != EOF)
{
    if (textChar == 'a' || textChar == 'A' || textChar == 'e' || textChar == 'E' || textChar == 'u' || textChar == 'U' || textChar == 'i' || textChar == 'I' || textChar == 'o' || textChar == 'O')
    {
       vowelSum++;
    }
}
printf("The number of vowels: %d ",vowelSum);


myFunction(myChar);

fclose(vowelPtr);

    return 0;
}

void myFunction(char myChar){
FILE* vowelPtr;
vowelPtr = fopen("text.txt","r");
FILE* newtextPtr;
newtextPtr = fopen("newtext.txt","w");

while ((myChar = fgetc(vowelPtr)) != EOF)
{
if (myChar == 'a') 
{
    fputc('e', newtextPtr);
} 
else if (myChar == 'u') {
    fputc('o', newtextPtr);
} 
else 
{
    fputc(myChar, newtextPtr);
}
}

fclose(vowelPtr);
fclose(newtextPtr);
}