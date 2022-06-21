#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
    char name[20];
    int age;
    float height;
    float percentage;
}obj,*ptr;
int main(){
    //struct student obj;
    *ptr=obj;
    strcpy(ptr->name,"SWATI AGGRAWAL");
    ptr->age=21;
    ptr->height=162;
    ptr->percentage=88.50;
    printf("\n %p,ptr");
    //printf("\nNAME:%s",ptr->name);
    //printf("\nAGE:%d",ptr->age);
    //printf("\nHEIGHT:%f",ptr->height);
    //printf("\nPERCENTAGE:%f",ptr->percentage);
   
    return 0;
}