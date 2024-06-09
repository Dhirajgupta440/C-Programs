#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int length=sizeof(arr)/sizeof(arr[0]);
    printf("number of elements present in given arry:%d",length);
    return 0;
}