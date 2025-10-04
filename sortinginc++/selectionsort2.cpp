#include<iostream>
#include<vector>
using namespace std;
void selectionsort(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n-1;i++ ){
       int min_idx = i;
       for (int j = i+1; j < n; j++)
       {
        if(v[j]<v[min_idx]){
            min_idx = j;
        }
        if (min_idx !=i){
            swap(v[min_idx],v[i]);
        }
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
    selectionsort(v);   // call the selectionsort

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}