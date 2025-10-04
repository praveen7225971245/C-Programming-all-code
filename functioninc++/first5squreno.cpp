#include<iostream>
using namespace std;
int squre(int x){
   int squre = x*x;
return squre ;
}
int cube(int x){
    int cube = x*x*x;
    return cube;
}
int main(){
    int n;
    cout<<"enter the value";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cout<<squre(i)<<endl;
    }
    for (int j = 1; j <= n; j++)
    {
        cout<<cube(j)<<endl;
    }
    return 0;
}
