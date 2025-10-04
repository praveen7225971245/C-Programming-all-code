#include<iostream>
using namespace std;
int countnotes(int x){
    int arr[9]={1000,500,200,100,50,20,10,5,1};
    for(int i = 0;i<9;i++){
        cout<<arr[i]<<" notes is = "<<x/arr[i]<<endl;
        x %= arr[i];
    }
}
int main(){
    // int arr[9]={1000,500,200,100,50,20,10,5,1};

    // using function 

    int amount;
    cout<<"enter the amount ";
    cin>>amount;
    countnotes(amount);




    // for(int i = 0;i<9;i++){
    //     cout<<arr[i]<<" notes is = "<<amount/arr[i]<<endl;
    //     amount %= arr[i];
    // }
}