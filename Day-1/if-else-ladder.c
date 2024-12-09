#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter any 3 numbers");
    scanf("%d %d %d",&num1, &num2,&num3);
    if((num1>num2)&&(num1>num3)){
        printf("first Number(%d)is greatest",num1);
    }
    else if(num2>num3){
         printf("Second Number(%d)is greatest",num2);
    }
    else{
          printf("Third Number(%d)is greatest",num3);
    }
}
        