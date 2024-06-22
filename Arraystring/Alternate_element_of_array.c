#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The alternate numbers are:");
    for (i = 0; i < n; i = i + 2)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}