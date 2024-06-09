#include <stdio.h>
int main()
{
    int i, sum = 0, a[10];
    long int pro = 1;
    printf("enter the number: ");
    for (int i = 0; i < 10; i++)
    {
        // printf("enter the number");
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= 9; i++)
    {
        if (a[i] % 2 == 0)
            sum = sum + a[i];
        else
            pro = pro * a[i];
    }
    printf("sum of even number is :%d\n product of odd number is :%ld", sum, pro);
    return 0;
}