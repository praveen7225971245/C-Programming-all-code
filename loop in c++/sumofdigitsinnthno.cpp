#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the value :";
    cin>>n;
    int reverse=0;
   
    while (n>0)
    {
        int remainder=n%10;
        n=n/10;
       reverse=reverse*10+remainder;
    }
    cout<<reverse;
} 