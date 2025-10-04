#include<iostream>
using namespace std;
int largestvalue(int x,int y,int z){
    if(x>y && x>z){
        cout<<" x is largest "<<x;
    }else if(y>x && y>z){
         cout<<"y is largest "<<y;
    }else if(z>y && z>x){
        cout<<"z is largest "<<z;
    }else{
        cout<<"both are equal or 3 value are equal ";
    }
}
int main(){
    int a,b,c;
    cout<<"enter the value ";
    cin>>a>>b>>c;
    largestvalue(a,b,c);

    // if(a>b && a>c){
    //     cout<<" a is largest "<<a;
    // }else if(b>a && b>c){
    //      cout<<"b is largest "<<b;
    // }else if(c>b && c>a){
    //     cout<<"c is largest "<<c;
    // }else{
    //     cout<<"both are equal or 3 value are equal ";
    // }

}