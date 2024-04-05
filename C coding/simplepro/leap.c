#include<stdio.h>
int main(){
    int y;
    printf("enter the year:");
    scanf("%d",&y);
    if(y%4==0){
        printf("enter year is leap year");
    }
    else{
        printf("enter year is not leap year");

    }
    return 0;
}