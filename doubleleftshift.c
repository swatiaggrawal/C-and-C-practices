/*What is bitwise double left shift.Give Example through code.*/
#include<stdio.h>
#include <stdlib.h>
int main(){
    /*Left shift takes two numbers and left shits the bits of the first operand by a number decided by the second operand. Double left shift implies taking second eprand aa 2*/
    int x=10; //00001010
    printf("10<<1 = %d \n",x<<1); //00010100=v20 in decimal form
    return 0;
}