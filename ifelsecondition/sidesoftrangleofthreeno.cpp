#include<iostream>
using namespace std;
int main (){
    int a,b,c;
    cout<<"enter three value :";
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && c+a>b){
        cout<<"valid trangle ";
    }
    else
    cout<<"invalid trangle ";
} 