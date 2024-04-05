#include<stdio.h>

void printhlw(int count);
int main() {
    int count;
    printf("enter the no. of times to print hello:\n");
    scanf("%d", &count);
    printf("print %d times\n", count); 
    printhlw(count); 

    return 0;
}
void printhlw(int count) {
    if(count == 0) {
        return;
    }
    printf("hello world\n"); 

    printhlw(count - 1);
}

