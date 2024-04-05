#include<stdio.h>
int fact(int n);
int main(){
    int n,res;
    printf("input the term:");
    scanf("%d",&n);
    res=fact(n);
    printf("%d is the factorial of given term %d",res,n);

}
int fact(int n){
    if (n==1||n==0)
   {return 1;}
   else
    {int nth=n*fact(n-1);
    return nth;}
}
