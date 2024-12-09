#include<stdio.h>
int main(){
    //data type array_name[size]
    int arr[5]={10,20,30,40,50};//declaring &initilazing an array
    printf("The array elements are as follows:\n");
    for(int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
}
//what is array?
// => To store the multiple values of the same type in a single variable
//size of array=n-1