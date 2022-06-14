/*print a 3d arraythrough while loop(nested)*/
#include<stdlib.h>
#include<stdio.h>
int main()
{
    int a[10][10][10]={
        {{1,2},{3,4},{5,6}},
        {{7,8},{9,10},{11,12}}
    };
    int i=0;
    while(i<2){
        int j=0;
        while(j<3){
            int k=0;
            while(k<2){
                printf("\t %d",a[i][j][k]);
                k++;
            }
            j++;
        }
        i++;
    }
    return 0;
}