#include<iostream>
#include<vector>
using namespace std;
void insertionsort(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n-1;i++ ){
        int j =i+1;
        while(j>=1 && v[j-1]>v[j]){
            swap(v[j-1],v[j]);
            j--;
        }
}
}
int main (){
    int n;
    cout<<"enter the value ";
    cin>>n;

    vector<int> v(n);    //int arr[n];     /use kar sakte hai
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    insertionsort(v);   // call the bubblesort 

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

} 