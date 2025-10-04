#include<iostream>
using namespace std;
int main (){
    int n,factorial;
    cout<<"enter the value :";
    cin>>n;
    factorial=1;
    if(n<0){
        cout<<"negative no. does not exist ";
    }
    else{
        for(int i=1;i<=n;i++){
            factorial=factorial*i;
        }
        cout<<"factorial is "<<factorial;
    }
    return 0;
} 