#include<iostream>
using namespace std;
int divisible(int n){
    
    if((n%5==0 && n%11==0)){
        cout<<"divisible by 5 & 11 = "<<n;
    }else{
        cout<<"not divisible by 5 & 11 = "<<n;
    }
}
int main(){
    int n;
    cout<<"enter the value ";
    cin>>n;
    divisible(n);
    // int number = divisible(n);
    // cout<<number;
    // cout<<divisible;
    // if((n%5==0 && n%11==0)){
    //     cout<<"divisible by 5 & 11 = "<<n;
    // }else{
    //     cout<<"not divisible by 5 & 11 = "<<n;
    // }

}