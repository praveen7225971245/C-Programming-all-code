#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the value :";
    cin>>n;
    for(int i=n; i>=1; i--){
        if(n%i==0){
            cout<<i<<endl;
        }
    }
}