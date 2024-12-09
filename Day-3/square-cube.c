#include<stdio.h>
int square(int a){
    return a*a;
}
int cube(int a){
    return a*a*a;
}
int main(){
    int num,result;
printf("Enter a number to find it's square and cube:");
scanf("%d",&num);
result=square(num);
printf("The square of %d is: %d\n",num,result);
result=cube(num);
printf("The cube of %d is:%d",num,result);
}
