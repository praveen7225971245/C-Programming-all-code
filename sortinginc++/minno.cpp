#include<iostream>
#include<vector>
using namespace std;
int main (){
    int n;
    cout<<"enter the value ";
    cin>>n;

    // vector<int> v(n);    
    int arr[n];                  // /use kar sakte hai
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    int mn =0;
    int mindx = -1;
    for(int i=0;i<n;i++){
        if(mn>arr[i]){
        mn = arr[i];
        mindx = i;
        }
    }
    cout<<mn<<" "<<mindx;

}