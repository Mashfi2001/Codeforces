#include <stdio.h>
#include <ctype.h>
#include<string.h>

int main(){
char greetings[1024];
scanf("%s", greetings);
greetings[0] = toupper(greetings[0]);
printf("%s\n", greetings);
}