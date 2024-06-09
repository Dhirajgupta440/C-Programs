#include<stdio.h>
#include<string.h>
int main(){
    char string[53];
    
    printf("enter the string:");
    scanf("%s", string);
    printf("length of string is = %d\n",strlen(string));
  printf("lowercase of string is = %s\n",strlwr(string));
 
    printf("reverse of string is = %s\n",strrev(string));
    printf("lowercase of string is = %s\n",strlwr(string));

    
}