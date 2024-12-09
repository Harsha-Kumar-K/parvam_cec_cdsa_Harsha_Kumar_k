#include<stdio.h>
#define PI 3.142
float area(float rad){
    return PI*rad*rad;
}
float circumference(float rad){
    return 2*PI*rad;
}
int main(){
    float radius,result;
    printf("Enter the radius of the circle:");
    scanf("%f",&radius);
    result=area(radius);
    printf("Area of circle for the given radius(%f):%f\n",radius,result);
    result=circumference(radius);//function call for circumference
    printf("Circumference of circle for the given radius(%f):%f",radius,result);
}