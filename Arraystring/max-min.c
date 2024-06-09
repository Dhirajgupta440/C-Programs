#include<stdio.h>

int main() {

    int arr[5];
    printf("enter the elements of array: \n ");
    for(int i=0;i<5;i++)
    {
      printf("Enter %d element: ", i);
      scanf("%d",&arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < 5; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
        else if ( min > arr[i]) {
            min = arr[i];
        }
    }

    printf("Max: %d\n Min: %d\n", max, min);

    return 0;
}