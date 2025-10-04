#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the marks :";
    cin>>n;
    if(n>=90){
        cout<<"excelant ";
    }
    else if(n>=70){
    cout<<"very good ";
    }
    else if(n>=50){
        cout<<" can do better :";
    }
    else if(n>=33){
        cout<<" average ";
    }
    else{
        cout<<" fail ";
    }
} 