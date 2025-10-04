#include<iostream>
using namespace std ;
double area(int r){
    float circle =3.14 * r * r ;
    return circle ; 
}
double circumference(int r){
    return 2 * 3.14 * r ; 
}
int main(){
    int n;
    cout<<"enter the value";
    cin>>n;
    cout<<area(n)<<endl;
    cout<<circumference(n);
    return 0;
}
