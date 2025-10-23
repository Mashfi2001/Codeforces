#include<stdio.h>

int main(){
    int times;
    scanf("%d",&times);
    double ins;
    double output = 0;
    for(int i = 0;i<times;i++){
        scanf("%lf", &ins);
        output+=ins;
    }
    printf("%.12f", output/times);
}