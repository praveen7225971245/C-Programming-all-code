#include<iostream>
using namespace std;
bool odd(int num){
    if (num %2==0)
    {
        return false ;
    } else{
        return true;
    }
}
int main(){
    int n;
    cout<<"enter the value";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if (odd(i))
        {
            cout<<i<<" ";
        }
        
    }
    
}