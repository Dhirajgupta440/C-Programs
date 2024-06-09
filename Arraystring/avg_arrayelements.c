#include<stdio.h>
int main(){
    int arr[5];
    printf("enter the elements of array\n:");
    for(int i=0;i<5;i++)
    {
      printf("Enter %d element: ", i);
      scanf("%d",&arr[i]);
    }

    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    int avg = sum / size;
    printf("The average of the array is : %d ", avg);

    }
