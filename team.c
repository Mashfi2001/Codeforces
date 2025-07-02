#include <stdio.h>

int main(){
    int pblms;
    scanf("%d", &pblms);
    int count=0;
    int result=0;
    while(count<pblms){
        int num1;
        int num2;
        int num3;
        scanf("%d %d %d", &num1, &num2, &num3);
        if(num1+num2+num3>=2){
            result++;
        }
        count++;
    }
    printf("%d", result);
    return 0;
}