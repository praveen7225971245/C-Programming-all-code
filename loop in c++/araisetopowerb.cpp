#include<iostream>
using namespace std;
int main (){
    int a,b;
    cout<<"enter the value a :";
    cin>>a;
    cout<<"enter the value b :";
    cin>>b;
    int result=1;
        for(int i=1;i<=a;i=i+b){
            result=result*a;
        }
        cout<<"result is "<<result<<endl;
} 