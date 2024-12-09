#include<stdio.h>
int main(){
    int row, column;
    printf("Enter the number of rows and columns:");
    scanf("%d %d", &row, &column);
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("*\t");
        }
        printf("\n");
    }
}
//r=3,c=3

//Step1: i=0,0<3-T
//       j=0,0<3-T
//       *
//Step2: i=0,0<3-T
//       j=1,1<3-T
//       * *
//Step3: i=0.0<3-T
//       j=2,2<3-T
//       * * *
//Step4: i=0.0<3-T
//       j=3,3<3-F
//       * * *

