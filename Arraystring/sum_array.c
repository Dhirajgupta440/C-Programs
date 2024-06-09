#include<stdio.h>

int main() {

    int arr[5],sum=0,i;
    printf("enter the elements of array: \n ");
    for(int i=0;i<5;i++)
    {
      printf("Enter %d element: ", i);
      scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        sum += arr[i];
    }
    printf("sum of elements of array is %d",sum);
    return 0;
}
