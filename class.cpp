#include<iostream>
#include<conio.h>
using namespace std;
class myclass{
    public:
        int age;
        float height;
}obj;
int main(){
    obj.age=21;
    obj.height=162;
    cout<<"\n"<<obj.age;
    cout<<"\n"<<obj.height;
    return 0;
    
}