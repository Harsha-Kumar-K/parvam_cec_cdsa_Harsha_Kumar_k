#include<stdio.h>
#include<string.h>
int main(){
    char str[20],rev[20];
    printf("Enter any word:");
    scanf("%s", str);
    printf("Original String:%s\n",str);
    strcpy(rev, str);
    strrev(str);
    printf("reversed String:%s\n",str);
    if(strcmp(str,rev)==0){
        printf("The given world is a Palindrome");
    }
    else{
         printf("The given world is not a Palindrome");
        
    }
}