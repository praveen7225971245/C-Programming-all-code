#include<iostream>
#include<vector>
using namespace std;
int main (){
    int n;
    cout<<"enter the value ";
    cin>>n; 
    int arr[n];                  // /use kar sakte hai
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min =0;
    int minindex = -1;
    for(int i=0;i<n;i++){
        if(min>arr[i]){
        min = arr[i];
        minindex = i;
        }
    }
    cout<<min<<" "<<minindex;
}