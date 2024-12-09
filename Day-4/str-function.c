#include<stdio.h>
#include<string.h>
int main(){
    char f_name[20], l_name[20],name[50];
    printf("Enter your first name:");
    scanf("%s", f_name);
    printf("Enter your last name:");
    scanf("%s", l_name);
    strcpy(name,f_name);
    //strcpy=>string copy(resultstring, orgString)
    strcat(name,l_name);
    //strcat=>string concatenation ->strcat(result_str,org_str)
    // Ex: str1="Zayan" str2="Malik => strcat(str1,str2)=>zayan Malik
    printf("Full name:%s\n",name);//using string handling functions
    printf("Full name:%s %s\n",f_name,l_name);
    printf("Full name in Uppercase:%s\n",strupr(name));
    //strupr=>string upper->converts the string to upper case 
     printf("Full name in lowercase:%s\n",strlwr(name));
     //strlwr=>string lower->converts the string to lower case 
     printf("Full name is reversed:%s",strrev(name));
     //strrev=>string reverse->Reverses the given string
}