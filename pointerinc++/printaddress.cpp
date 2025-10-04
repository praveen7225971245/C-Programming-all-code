#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 20;
    int *p = &a;   //address of a
    int *q = &b;    //address of b
    cout<<a<<" ";    //10 
    cout<<&a<<endl;    // 0x60ff0c
    cout<<b<<" ";       // 20 
    cout<<&b<<endl;     // 0x60ff08
    
    cout<<p<<" ";        //  0x60ff0c
    cout<<*p<<endl;       // 10

    cout<<&p<<" "<<endl;   //0x60ff04  //address of p

    cout<<q<<" ";            // 0x60ff08
    cout<<*q<<endl;         // 20
    cout<<&q<<" "<<endl;    // 0x60ff00  //address of q


    cout<<"After changing the value of a"<<endl;
    //changing the value of a using pointer
    *p = 30;
    cout<< p<<" ";    // 0x60ff0c // new address of a
    cout<<*p<<endl;    // 30
    cout<<a<<" ";       // 30
    cout<<&a<<endl;     // 0x60ff0c   

}