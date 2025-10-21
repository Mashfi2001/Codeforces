#include<stdio.h>

int main(){
    long long num;
    scanf("%lld", &num);
    if(num<=5){
        printf("%d", 1);
    }else{
        int count = 5;
        int result = 0;
        while(num!=0){
            result+=num/count;
            num = num % count;
            count--;
        }
        printf("%d\n",result);
    }
}