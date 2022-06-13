#include <stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int len=strlen(s);
    printf("enter the string");
    gets(s);
    for(int i=len+1;i>=0;i--){
        printf("\t %c",s[i]);
    }
}