#include<stdio.h>
int palindrome(char str[],int len){
    int s=0,e=len-1;
    while(s<=e){
        if(str[s]!=str[e]){
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}
int main(){
    char str[20];
    printf("enter string:");
    scanf("%s",str);
    int len=0;
    while(str[len]!='\0'){
        len++;
    }
    if(palindrome(str,len)){
        printf("%s is palindrome",str);
    }
    else{
        printf("%s is not palindrome",str);
    }
    return 0;
    }
