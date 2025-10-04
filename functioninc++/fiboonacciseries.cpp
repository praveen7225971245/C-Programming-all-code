#include<iostream>
using namespace std;
int fiboonaci (int);//prototype use
int main(){
    int n ;
    cout<<"enter the value ";
    cin>>n;
    for(int i = 0;i<=n;i++) { //ese es tarah bhi likh sakte hai 
    cout<<fiboonaci(i)<<" ";           //cout<<add(a,b);
    }
    return 0;
}
int fiboonaci(int n){
    int n1 = 0;
    int n2 = 1;
    for (int i = 1; i <= n; i++)
    {
        int temp = n1+n2;
        n1 = n2;
        n2 = temp;
    }
    return n2;
}