#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of an array:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the (%d)elements of an array:" , size);
    for(int i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }
    printf("The array elements are as follows:\n");
    for(int i=0;i<size;i++){
        printf("The element in index arr[%d]:%d\n",i,arr[i]);
    }
}