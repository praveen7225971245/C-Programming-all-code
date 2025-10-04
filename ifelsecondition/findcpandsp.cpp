#include<iostream>
using namespace std;
int main (){
    int cp;  //cost prize
    cout<<"enter the cost prize :";
    cin>>cp;
    int sp;  //selling prize
    cout<<"enter the selling prize :";
    cin>>sp;
    if(sp>cp){
        cout<<"profit is  :";
        cout<<sp-cp;
    }
    else if(cp>sp){
        cout<<"loss is :";
        cout<<cp-sp;
    }
    else{
        cout<<"no profit no loss :";
    }
    return 0;
} 