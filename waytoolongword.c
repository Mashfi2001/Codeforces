#include <stdio.h>
#include <string.h>

int main(){
    int num;
    scanf("%d", &num);
    int count = 0;
    while(count<num){
        char word[101];
        scanf("%s", word);
        count++;
        int len = strlen(word);
        if(len>10){
            printf("%c%d%c\n", word[0], len-2, word[strlen(word)-1]);
        }else{
            printf("%s\n", word);
        }
    }
    return 0;
}