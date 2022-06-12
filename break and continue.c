#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=10;
    printf("break\n");
    for(int i=0;i<11;i++){
        if(i==3){
            break;
        }
        printf("%d\t",i);
    }
     printf("\ncontinue\n");
    for(int i=0;i<11;i++){
        if(i==3){
            continue;
        }
        printf("%d\t",i);
    }
}