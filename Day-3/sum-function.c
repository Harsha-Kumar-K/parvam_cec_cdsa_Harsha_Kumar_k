#include<stdio.h>
//datatype fun_name(parameters){//declaration
// statements por sum operation//definition
//}
int sum(int a,int b){
        return a+b;
    }
    int main(){
        int op1,op2,add;
        printf("Enter any number to get the sum of the digits:");
        scanf("%d %d",&op1,&op2);
        add=sum(op1,op2);//function call
        printf("sum of %d & %d : %d",op1,op2,add);
    }
    