#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the value :";
    cin>>n;
    int i=n;
    while (i<=n*10)
    {
        cout<<i<<" ";
        i=i+n;
    }
} 