#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str); //getline(cin,str) is used to read a line of text from the standard input (cin) and store it in the string variable str.
    cout<<str<<endl;
    return 0;
}