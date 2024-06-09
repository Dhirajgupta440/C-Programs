#include<stdio.h>
#include<string.h>
int main(){
    char str[500];
    printf("enter the string :\n");
    gets(str);
    printf("string you entered is:");
    puts(str);

    printf("length of the string is:%d", strlen(str));
    return 0;
}