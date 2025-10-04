#include<iostream>
#include<vector>
using namespace std;
void bubblesort(vector<int> &v){
    int n=v.size();
    for(int i=n-1;i>=0;i-- ){      //i -> n-1 to o
        int j=0;
        bool flag=false;
        while(j!=i){                //j -> 0 to < i
            if(v[j]==0 && v[j+1]){
                swap(v[j],v[j+1]);
                flag=true;
            }
            j++;
        }
        if(!flag) break;
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