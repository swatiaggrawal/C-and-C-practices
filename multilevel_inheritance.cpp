#include<iostream>
#include<conio.h>
using namespace std;
class grandparent{
    public:
    int age;
    int height;
    
};
class parent: public grandparent{
    public:
   
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