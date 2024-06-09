

#include <stdio.h>

void swapx(int x, int y);

int main()
{
    int a, b;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    printf("Before swap:\na = %d b = %d\n", a, b);
    swapx(a, b);
    return 0;
}

void swapx(int x, int y)
{
    int t;
    t = x;
    x = y;
    y = t;

    printf("After swap:\nx = %d y = %d\n", x, y);
}