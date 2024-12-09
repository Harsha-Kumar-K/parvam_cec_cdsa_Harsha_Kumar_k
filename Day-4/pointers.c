#include<stdio.h>
int main(){
    int num=20;
    printf("The value of number:%d\n",num);
    printf("The address of number(%d):%p\n",num, &num);
 // datatype*pointer_variables = &reference
    int* ptr= &num;//pointer variable-ptr
     printf("The address of pointer:%p\n",ptr);
     printf("The value of pointer:%d\n",*ptr);
}
// pointers => A special variable which is used to store the value of anther variable 
//* => derefering or value
//& =>refrencing or address
//ptr => address of reference variable
//    types pf pointers
// Null =>   
// Void => 
// wild =>
// dangling => 