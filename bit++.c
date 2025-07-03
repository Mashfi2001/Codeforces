#include <stdio.h>
#include <string.h>

int main(){
    int num;
    scanf("%d", &num);
    int count = 0;
    int result = 0;
    while(count<num){
        char op[5];
        scanf("%s", op);
        if(strcmp(op, "++X") == 0 || strcmp(op, "X++") == 0){
            result++;
        } else if(strcmp(op, "--X") == 0 || strcmp(op, "X--") == 0){
            result--;
        }
        count++;
    }
    printf("%d", result);
    return 0;
}