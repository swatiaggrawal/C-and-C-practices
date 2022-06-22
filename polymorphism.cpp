#include<iostream>
#include<conio.h>
using namespace std;
class marks{
    public:
        void display(){
            cout<<"\nmarks";
        }

}m;
class hindi:public marks{
    public:
    void display(){
        cout<<"\nhindi marks";
    }
}h;
class maths:public marks{
     public:
    void display(){
        cout<<"\nmaths marks";
    }
}mt;
class english:public marks{
     public:
    void display(){
        cout<<"\nenglish marks";
    }
}e;
class socialstudies:public marks{
     public:
    void display(){
        cout<<"\nsocialstudies marks";
    }
}st;
class science:public marks{
     public:
    void display(){
        cout<<"\nscience marks";
    }
}s;
int main(){
    m.display();
    h.display();
    mt.display();
    e.display();
    st.display();
    s.display();
}