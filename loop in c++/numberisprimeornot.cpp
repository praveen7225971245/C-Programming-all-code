#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the value :";
    cin>>n;
    int a=1;   //eski jagh per bool ka use kar sakte hai.
    for(int i=2; i<=n-1; i++){
        if(n%i==0){
            a=0;
            break;
        }
    }
    if(n==1) cout<<"not composite and not prime ";
    else if(a==1) cout<<"no. is prime ";
    else cout<<"no. is composite";
} 