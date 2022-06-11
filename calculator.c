/* Make a user input calculator which is able to perform modulus function*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,z;
    printf("enter the value for number 1:"); //input 1
    scanf("%d",&a);
    printf("enter the value for number 2:"); //input 2
    scanf("%d",&b);
    z=a+b;
    printf("\naddition %d",z); //addition
    z=a-b;
    printf("\nsubtraction %d",z); //subtraction
    z=a*b;
    printf("\nmultiplication %d",z); //multiplication
    z=a/b;
    printf("\ndivison %d",z); //divison
    z=a%b;
    printf("\nmodulus %d",z); //modulus
}