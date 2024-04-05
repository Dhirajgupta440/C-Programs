#include<stdio.h>
void fibo(int n);
int main(){
    int n;
    printf("enter the number of element:");
    scanf("%d",&n);
    printf("Fibonacci series:");
    printf("%d %d",0,1);
    fibo(n-2);
    return 0;
}
void fibo(int n){
    static int n1=0,n2=1,n3;
    if(n>0){
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d\t",n3);
        fibo(n-1);
    }
}