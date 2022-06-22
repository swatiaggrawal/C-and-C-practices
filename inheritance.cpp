#include<iostream>
#include<conio.h>
using namespace std;
class parent{
    public:
    int age;
    int height;
    void input(){
        cout<<"enter age"<<endl;
        cin>>age;
        cout<<"enter height"<<endl;
        cin>>height;
    }
};
class child: public parent{
    public:
    void display(){
        cout<<"\nAge:"<<age;
        cout<<"\nHeight:"<<height;
    }
};
int main(){
    child obj;
    obj.input();
    obj.display();
}