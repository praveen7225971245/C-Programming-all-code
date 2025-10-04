#include<iostream>
#include<vector>
using namespace std;
void bubblesort(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n-1;i++ ){
        bool flag = false ;      //opitmize the bubblesort
        for(int j = 0; j < n-i-1; j++){
            // if (v[j]>v[j+1]){
            if (v[j]==0){         //zero ko push karna hai to
                flag = true;
                // swap(v[j],v[j+1]);
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            } 
        }
        if(flag==false) break;
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
    bubblesort(v);   // call the bubblesort 

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}