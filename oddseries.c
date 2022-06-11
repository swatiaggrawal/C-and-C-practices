/* WAP to create an infinite odd series */
#include <stdlib.h>
#include<stdio.h>
int main(){
    int difference=2;
    int number=1;
    while(2){
    printf("\n difference: %d number: %d",difference,number);
    number=number+difference;
    }
    return 0;
}