#include<iostream>
using namespace std;
int main (){
    int x,y;
    cout<<"enter the value :";
    cin>>x;
    cout<<"enter the value :";
    cin>>y;
    x+=y-=x;
    cout<<x<<" "<<y<<endl;
}