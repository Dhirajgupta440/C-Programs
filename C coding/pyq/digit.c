#include<stdio.h>
int main(){
    int n,sum=0,reminder;
    printf("enter the number:");
    scanf("%d",&n);
    while(n != 0){
        reminder=n%10;
        sum+=reminder;
        n=n/10;
    }
    printf("sum of digit of number is %d",sum);
    return 0;

}