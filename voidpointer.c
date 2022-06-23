#include<stdio.h>
#include<stdlib.h>
int main(){
    int a=8;
    char b='Q';
    void *ptr; 
    ptr=&a;
    printf("\n%d",*((int *)ptr));
    ptr=&b;
    printf("\n%c",*((char *)ptr));
    return 0;
}