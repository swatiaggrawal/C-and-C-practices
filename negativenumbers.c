#include <stdlib.h>
#include<stdio.h>
int main()
{
    int num;
    while(2){
        printf("\nenter number");
        scanf("%d",&num);
        int sum=0;
        sum+=num;
        if(num<=0){
            printf("\nloop terminated");
            break;
        }

    }
    printf("\n%d",&sum);
    return 0;
}

