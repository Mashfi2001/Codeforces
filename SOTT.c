#include <stdio.h>
#include <string.h>

int main(){
    int nums;
    scanf("%d\n",&nums);
    char name[nums+1];
    int count = 0;
    fgets(name, sizeof(name),stdin);
    for(int i=0;i<nums;i++){
        if(name[i]==name[i+1]){
            count++;
        }
    }
    printf("%d\n", count);
}