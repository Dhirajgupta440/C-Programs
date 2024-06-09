#include<stdio.h>

int main() {
    int a[5] =  {1, 2, 3, 4, 5};
    printf("before reversed:");
    for (int  i = 0; i < 5; i++) {
        printf("%d\t", a[i]);
    }

    printf("\n");
    printf("after reversed:");

    for (int i = 4; i >= 0; i--) {
        printf("%d\t", a[i]);
    }
    return 0;
}