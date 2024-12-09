#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of an array:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of an array:");
    for(int i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }
    printf("Original array elements are as follows:\n");
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\nreversed array elements are as follows:\n");
    for(int i=size-1;i>=0;i--){
        printf("%d\t",arr[i]);
    }
}