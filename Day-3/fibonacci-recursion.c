#include<stdio.h>
int fibonacci(int num){
    if (num==0){
        return 0;
    }else if (num==1){
        return 1;
    }else{
        return fibonacci(num-1)+ fibonacci(num-2);
    }
}
int main(){
    int number,i;
    printf("Enter the range to print the fibonacci series:");
    scanf("%d",&number);
    printf("The fibonacci series from 0 to %d is:\n",number);
    for(i=0;i<number;i++){
    printf("%d\t",fibonacci(i));
}
}
//number=4

//i=0,0<4-T
//fib(0)=>0

//i=1,1<4-T
//fib(1)=>01

//i=2,2<4-T
//fib(2)=>01 fib(2-1)+fib(2-2)
//      =>01 (fib(1)+fib(0)
//      =>01(1+0)
//      =>011
//i=3,3<4-T
//fib(2)=>011(fib(3-1)+fib(3-2))
//      =>011((fib(2)+fib(1))
//      =>011(1+1)
//      =>0112
