/* Create a user input interest and principal rate of income*/
#include<stdio.h>
#include <stdlib.h>
int main()
{
    float p,r;
    int t;
    printf("enter the value for principal amount in rupees:"); //input principal amount
    scanf("%f",&p);
    printf("enter the value for rate of interest in percentage:"); //input rate
    scanf("%f",&r);
    printf("enter the value for time in years:"); //input time
    scanf("%d",&t);
    float interest;
    interest=(p*r*t)/100;
    interest=interest+p;
    printf("total amount after %d years: %f",t,interest);


}