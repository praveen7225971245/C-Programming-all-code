#include<iostream>
using namespace std;
bool prime(int num){
    for(int i=2;i<=num-1;i++)
    {
        if(num%i==0){
        return false ;
        }
    }
        return true;
}
int main(){
    int n;
    cout<<"enter the value";
    cin>>n;
    for(int i = 2; i <= n-1; i++)
    {
        if (prime(i))
        {
            cout<<i<<" ";
        }  
    }
}