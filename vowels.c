#include<stdio.h>
#include<stdlib.h>
int main(){
    char str[40];
    int count=0;
    printf("\nenter string");
    gets(str);
    for(int i=0;str[i];i++){
        
        if(str[i]=='A'|| str[i]=='a' || str[i]=='E'|| str[i]=='e'|| str[i]=='I'|| str[i]=='i'|| str[i]=='O'|| str[i]=='o'|| str[i]=='U'|| str[i]=='u'){
            count++;
        }
    }
    printf("\nThe number of vowels are:%d",count);
}