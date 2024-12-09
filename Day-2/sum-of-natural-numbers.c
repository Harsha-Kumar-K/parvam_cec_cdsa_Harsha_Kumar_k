#include<stdio.h>
int main(){
    int num,sum=0;
    printf("Enter a positive numbers:");
    scanf("%d",&num);
    for(int i=0;i<=num;i++){
        sum=sum+i;
    }
    printf("The Sum Of Natural Numbers from 0 to %d is:%d",num,sum);
}