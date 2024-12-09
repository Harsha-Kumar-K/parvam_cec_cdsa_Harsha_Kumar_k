#include<stdio.h>
int factorial(int num){
    if(num==0||num==1){
        return 1;
    }
    return num * factorial(num-1);
}
int main(){
    int number,result;
    printf("Enter a number to find the factorial:");
    scanf("%d",&number);
    result=factorial(number);
    printf("The factorial of %d is:%d",number,result);
}
//num=3
//result=fact(3)
//step1:3-0 or 1-F
//return3*factorial(3-1)=>3*fact(2)
//                         return2*fact(2-1)=>2*fact(1)
//                                          =>2*1
// 3*2*1=6