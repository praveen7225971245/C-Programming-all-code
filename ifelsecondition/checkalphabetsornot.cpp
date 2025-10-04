#include<iostream>
using namespace std;
int main (){
    int ch;
    cout<<"enter the charecter :";
    cin>>ch;
    int x = (int)ch;
    if((x>=65 && x<=90)||(x>=97 && x<=122)){
        cout<<"alphabets :";
    }
    else
    cout<<"not albhabets ";
} 