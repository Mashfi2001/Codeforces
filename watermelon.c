#include <stdio.h>
#include <math.h>
 
int main(){
    int num;
    scanf("%d", &num);
    if(num%2==0 && num > 2){
        printf("yes");
    } else {
        printf("No");
    }
    return 0;
}