#include<iostream>
using namespace std;
int main(){
    int big;
    
    int a[5]={2,9,11,5,1};
    big=a[0];
    for(int i=0;i<5;i++){
        
        
        if(big<a[i]){
            big=a[i];
        }

    }
    cout<<big;
}