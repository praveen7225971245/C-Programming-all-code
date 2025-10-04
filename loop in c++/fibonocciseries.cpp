#include<iostream>
using namespace std;
int main (){
    int n,t1=0,t2=1,nextterm;
    cout<<"enter the value :";
    cin>>n;
        for(int i=1;i<=n;++i){
            cout<<t1;
            nextterm=t1+t2;
            t1=t2;
            t2=nextterm;
        }
    return 0;
} 