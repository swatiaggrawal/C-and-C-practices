#include<stdio.h>
#include <stdlib.h>
int main()
{
    float p,r;
    int t;
    float perfectamount;
    printf("enter the value for principal amount in rupees:"); //input principal amount
    scanf("%f",&p);
    printf("\nenter the value for rate of interest in percentage:"); //input rate
    scanf("%f",&r);
   
    printf("\nenter the perfect amount");
    scanf("%f",&perfectamount);
    float interest;
    while(p<perfectamount)
    {
    interest=(p*r)/100;
    p=interest+p;
    printf("\ntotal amount : %f",p);
    }
    printf("\nnearest amount: %f",p);
}