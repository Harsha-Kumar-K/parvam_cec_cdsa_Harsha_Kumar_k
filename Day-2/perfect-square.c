#include<stdio.h>
int main(){
    int num,square,i=1;
    printf("Enter a range to print the perfect square:");
    scanf("%d", &num);
    do{
       if((square=(i*i))<num){
        printf("%d\n",square);
        i++;
       }
    }while(num>0);
}
//num=10
// step1:square=1*1<10=1
//       1
//       10>0-T
//step2:square=2*2<10=4
//       1 4
//       10>0-T
//step3:square=3*3<10=9
//       1 4 9
//       10>0-T