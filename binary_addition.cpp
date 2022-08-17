#include<iostream>
using namespace std;
void addBinary(int a[],int b[],int n){
    int r=0;
    int c[5];
    int s;
    for(int i=n-1;i>-1;i--){
        s=a[i]+b[i]+r;
        //cout<<s<<endl;
        c[i+1]=s%2;
        if(s>1)
            r=1;
        else
            r=0;
        
    }
    c[0]=r;
    for(int k=0;k<n+1;k++){
        cout<<c[k]<<endl;
    }
}
int main(){
    int a[4]={0,1,1,1};
    int b[4]={1,1,1,0};
    int n=4;
    addBinary(a,b,n);
    return 0;

}