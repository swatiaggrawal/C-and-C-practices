#include<stdlib.h>
#include<stdio.h>
int main()
{
    int a[10][10][10]={
        {{1,2},{3,4},{5,6}},
        {{7,8},{9,10},{11,12}}
    };
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<2;k++){
                printf("\t %d",a[i][j][k]);
                
            }
           
        }
       
    }
}