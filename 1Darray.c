#include<stdlib.h>
#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int i=0;
    while(i<5){
        printf("\n element at %d position is: %d",i,a[i]);
        i++;
    }
    return 0;
}