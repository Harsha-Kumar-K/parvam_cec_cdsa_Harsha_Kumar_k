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
        int target=0;
        printf("Enter the target element which need to be found:");
        scanf("%d", &target);
        for(int i=0; i<size; i++){
            if(arr[i]==target){
                printf("The target elemtnt %d if found at index:%d",target,i);
            }
        }
    }