#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }

        if(i==1||i==n){
            for(int x=1;x<=2*i-1;x++){
                cout<<"*";
            }
            
        }else{

        for(int k=1;k<=2*i-1;k++){

            if(k==1||k==2*i-1)
            cout<<"*";
            else
            cout<<" ";

        }
    }
        cout<<endl;
    
    }
}