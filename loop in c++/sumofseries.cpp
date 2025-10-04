// S = 1-2+3-4+5........................nth 
#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int result=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0){
            result=result-i;
        }
        else{
            result=result+i;
        }
    }
    cout<<"result is :";
    cout<<result;
} 