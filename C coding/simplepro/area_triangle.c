#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,area,s;
    printf("enter the sides of triangle:");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("the area of triangle is %f",area);
    return 0;
}