#include<iostream>
using namespace std;
int main(){
    int x=4;
    cout<<&x<<endl;    //Adderess store;
    int* p=&x;
    cout<<p<<endl;  
    cout<<*p<<endl;     //again adderess show;
    *p =100;
    cout<<x<<endl;
}