
#include <stdio.h>

int main()

{
    int x, y, temp;
    printf("Enter the number1:");
    scanf("%d", &x);
    printf("Enter the number2:");
    scanf("%d", &y);
    printf("Before swaping:\n");
    printf("x=%d , y=%d\n", x, y);
    temp = x;
    x = y;
    y = temp;
    printf("After swaping:\n");

    printf("x = %d and y = %d", x, y);

    return 0;
}