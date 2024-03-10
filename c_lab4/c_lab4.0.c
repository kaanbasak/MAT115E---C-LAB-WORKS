#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void isAlphabet(char ch, int sum){

srand(time(NULL));
ch = (rand() % 96) + 32;
sum = 65 <= ch && ch <= 90 || 97 <= ch && ch <= 122;

printf("random character: %c\n",ch);
printf("%c is alphabet(1) or not(0): %d ",ch,sum);
}

int main(){
char ch;
int sum;
isAlphabet(ch,sum);
    return 0;
}
    