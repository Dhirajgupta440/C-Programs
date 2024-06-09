/* */

#include<stdio.h>

int main()
{
    int r;
    float area,perimeter;
    printf("enter radius of circle");
    scanf("%d",&r);
    area=3.14*r*r;
    perimeter=2*3.14*r;
    printf("area of circle is:%f",area);
    printf("perimeter of circle is:%f",perimeter);
    return 0;

}