#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n>0){
        printf("entered number is positive");
        }
        else if(n<0){
            printf("entered number is negative");
            }
        
    else
    printf("entered number is zero");
    return 0;
}