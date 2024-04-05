#include<stdio.h>
void fibo(int t);
int main(){
    int n,n2;
    printf("enter number of terms n:");
    scanf("%d",&n);
    printf("fibonacci series:\n");
    printf("%d\t %d\t",0,1);
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