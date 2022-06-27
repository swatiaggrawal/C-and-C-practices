/*sort array according to length of string elements*/
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string a[5]={"abcde","abc","abcdef","ab","abcd"};
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            if(a[j].length()>a[j+1].length())
            {
                swap(a[j],a[j+1]);
            }
        }
    }
    cout<<"sorted array:";
    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;;
    }
    return 0;
}