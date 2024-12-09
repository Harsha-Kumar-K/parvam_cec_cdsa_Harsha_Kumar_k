#include<stdio.h>
int main(){
    char operator;
    float op1,op2,result;
    printf("Enter the operator(+,-,*,/):");
    scanf("%c",&operator);
    printf("Enter any 2 numbers:");
    scanf("%f %f",&op1,&op2);
    switch(operator)
    {
    case'+':
        result=op1+op2;
        printf("Sum of %f & %f: %f",op1,op2 ,result);
        break;
    case'-':
        result=op1-op2;
        printf("Difference of %f & %f: %f",op1,op2 ,result);
        break;
    case'*':
        result=op1+op2;
        printf("Product of %f & %f: %f",op1,op2 ,result);
        break;
    case'/':
        result=op1/op2;
        printf("Quotient of %f & %f: %f",op1,op2 ,result);
        break;
    default:
        printf("Invalid input.please try again with proper operations!");
        break;
}
return 0;
}