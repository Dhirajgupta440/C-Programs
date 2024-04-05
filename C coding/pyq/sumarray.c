#include<stdio.h>
int main(){
    int sum=0,i,arr[10];
    for(i=0;i<10;i++)
    {
    printf("enter the elements:");
    scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        sum +=arr[i];
    }
printf("sum of elements of array is %d:",sum);
return 0;
}