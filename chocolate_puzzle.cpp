#include<iostream>
#include<conio.h>
using namespace std;
int chocolate(int p,int w,int m){
    int choc=m/p;
    choc=choc+(choc-1)/(w-1);
    return choc;
}
int main(){
    int price=1;
    int wrapper=3;
    int money=15;
    int choc;
    choc=chocolate(price,wrapper,money);
    cout<<"Total Chocolates we can get:"<<choc;
    return 0;

}

