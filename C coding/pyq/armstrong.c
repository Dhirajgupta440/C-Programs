#include <stdio.h>
int main()
{
    int n, sum = 0, reminder;
    int temp;
    printf("enter the number n:");
    scanf("%d", &n);
    temp =  n;
    while (temp != 0)
    {
        reminder = temp % 10;
        sum += (reminder * reminder * reminder);
        temp = temp / 10;
    }
    if (sum == n){
    printf("entered number is armstrong");
    }
    else{
        printf("entered number is not armstrong");
    }

    
    return 0;
}