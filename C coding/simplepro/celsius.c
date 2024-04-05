#include<stdio.h>
int main(){
    float celsius,fahrenheit;
    printf("enter the temperature in celsius\n");
    scanf("%f",&celsius);
    fahrenheit=(9/5*celsius)+32;
    printf("temperature in fahrenheit is %f",fahrenheit);
    return 0;
}