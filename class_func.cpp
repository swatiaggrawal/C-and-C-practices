#include<iostream>
#include<conio.h>
using namespace std;
static class myclass{
    public:
        int age;
        float height;
        void func(){
            cout<<"hello";
        }
}obj;
int main(){
    obj.age=21;
    obj.height=162;
    cout<<"\n"<<obj.age;
    cout<<"\n"<<obj.height;
    obj.myclass;
    return 0;
    
}