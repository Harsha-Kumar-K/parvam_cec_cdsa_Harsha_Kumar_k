#include<stdio.h>
int main(){
    int num,rev=0;
    printf("Enter a number to be reversed:");
    scanf("%d",&num);
    //while(condition)
    printf("Entered Number:%d\n",num);
    while(num>0){
        rev=rev*10+num%10;
        num=num/10;
    }
    printf("Reversed Number:%d",rev);
}
//num=683
//step1:683>0-T
//       rev=0*10=0,683%10=3
//               =0   +  =3
//                   =3
//step2:683>0-T
//       rev=0*10=0,683%10=3
//               =0   +  =3
//                   =3