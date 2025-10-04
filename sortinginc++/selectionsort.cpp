#include<iostream>
#include<vector>
using namespace std;
void selectionsort(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n-1;i++ ){
       int min = INT8_MAX;
       int minindex = -1;
       for(int j=i;j<n;j++){
        if(min>v[j]){
          min = v[j];
          minindex = j;
        }
       }
       swap(v[i],v[minindex]);
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
    selectionsort(v);   // call the bubblesort 

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}