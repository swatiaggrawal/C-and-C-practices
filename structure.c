#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
    char name[20];
    int age;
    float height;
    float percentage;
};
int main(){
    struct student obj;
    strcpy(obj.name,"SWATI AGGRAWAL");
    obj.age=21;
    obj.height=162;
    obj.percentage=88.50;
    printf("\nNAME:%s",obj.name);
    printf("\nAGE:%d",obj.age);
    printf("\nHEIGHT:%f",obj.height);
    printf("\nPERCENTAGE:%f",obj.percentage);
    return 0;
}