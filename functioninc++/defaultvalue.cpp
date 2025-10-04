#include<iostream>
using namespace std;
int add(int num1,int num2=3){    //default value assine
    int sum=num1+num2;
    return sum;
}
int main(){
    int a=5;
    cout<<add(a);
    return 0;
}