#include<stdio.h>
#include<stdlib.h>
int main(){
    int total = 21;
    int n=4;
    int user,comp;
    while(total!=0){
        printf("\nenter number of matchsticks you want to pick(1-4)");
        scanf("%d",&user);
        total=total-user;
        comp= (rand() % (4 - 1 + 1)) + 1;
        printf("\ncomputer choose:%d",comp);
        total=total-comp;
        printf("\nremaining sticks:%d",total);
        if(total<=4){
            if(total==4){
                comp=3;
                printf("\nComputer choose:%d",comp);
                total=total-comp;
                printf("\nyou lose");
                break;
            }
            else if(total==3){
                comp=2;
                printf("\nComputer choose:%d",comp);
                total=total-comp;
                printf("\nyou lose");
                break;
            }
            else if(total==2){
                comp=1;
                total=total-comp;
                printf("\nComputer choose:%d",comp);
                printf("\nyou lose");
                break;
            }
            else{
                total=0;
                printf("\nReamaining stickis 1");
                printf("\nyou lose");
                break;
            }
        }


    }

}