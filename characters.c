#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
int main()
{
    char s[10];
    int countalpha=0;
    int countnum=0;
    int countspecial=0;
    //int n1,n2;
    //int len=strlen(s);
    printf("enter your string");
    gets(s);
    for(int i=0;s[i];i++){
        
        
        if(isalpha(s[i])!=0){
            countalpha++;
        }
        else if(isdigit(s[i])!=0){
            countnum++;
        }
        else{
            countspecial++;
        }
        
        
    }
    printf("number of alphabets:%d",countalpha);
    printf("number of numbers :%d",countnum);
    printf("number of special characters:%d",countspecial);
}