#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char name[100];
    scanf("%s", name);
    int length =0;
    int flag = 1;
    for(int i = 0;i<strlen(name);i++){
        for(int j = i+1;j<strlen(name);j++){
            if(name[i]==name[j]){
                flag = 0;
                break;
            }
        }if(flag==1){
            length++;

        }else{
            flag = 1;
        }
    }
    if(length%2==0){
        printf("CHAT WITH HER!\n");
    }else{
        printf("IGNORE HIM!\n");
    }
}