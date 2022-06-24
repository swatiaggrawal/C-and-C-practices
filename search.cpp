#include<iostream>
using namespace std;
int main()

{   int flag;
    int a[5]={1,2,3,4,5};
    int search=2;
    int pos;
    for(int i=0;i<5;i++){
        if(a[i]==search)
        {pos=i+1;}
        
    }
    
        cout<<"element found at:"<<pos<<"position";
   
}