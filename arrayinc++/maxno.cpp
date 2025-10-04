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
    int max =0;
    int maxindex = -1;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
        max = arr[i];
        maxindex = i;
        }
    }
    cout<<"max number of the array "<<max<<endl<<"no of index value "<<maxindex;

}