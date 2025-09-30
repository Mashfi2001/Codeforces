#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h> 

int main(){
    char word[200];
    char vowels[6] = {'a', 'e', 'i', 'o', 'u', 'y'};
    scanf("%s", word);
    int flag = 1;

    for(int i = 0;i<strlen(word);i++){
        for(int j = 0;j<6;j++){
            char hold=tolower(word[i]);
            if(hold == vowels[j]){
                flag = 0;
                break;
            }
        }
        if(flag==1 && i==strlen(word)){
            printf(".%c\n",tolower(word[i]));
        }else if (flag==1){
            printf(".%c",tolower(word[i]));
        }else{
            flag = 1;
        }
        
    }
}