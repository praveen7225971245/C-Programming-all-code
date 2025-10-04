#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the value :";
    cin>>n;
    if(n%3==0){
        if(n%5==0){
        cout<<"valid ";
        }
        else{
            cout<<"invalid ";
        }
    }
    else{
    cout<<"invalid ";
    }
}
