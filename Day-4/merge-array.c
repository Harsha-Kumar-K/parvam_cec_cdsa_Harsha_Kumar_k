#include<stdio.h>
int main(){
    int size1,size2;
    printf("Enter the number of an array elements for first array:");
    scanf("%d", &size1);
    printf("Enter the number of an array elements for second array:");
    scanf("%d", &size2);
    int arr1[size1],arr2[size2];
    printf("Enter the elements of first array:");
    for(int i=0;i<size1;i++){
        scanf("%d", &arr1[i]);
    }
 printf("Enter the element of second array:");
for(int j=0; j<size2; j++){
    scanf("%d", &arr2[j]);
}
        int size=size1+size2, merged_arr[size];
        for(int i=0; i<size1; i++){
            merged_arr[i]=arr1[i];
        }
        for(int j=0;j<size2;j++){
            merged_arr[size1+j]=arr2[j];
        }
        printf("The merged array elements are as follows:\n");
        for(int k=0;k<size;k++){
            printf("%d\t",merged_arr[k]);
        }
}        
