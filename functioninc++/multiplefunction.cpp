#include<iostream>
using namespace std;
// int add (int ,int,int );      //prototype use
// int multi(int ,int ,int );
int add(int a,int b,int c){
    int sum=a+b+c;
    return sum;
}
int sub(int a,int b,int c){
    int sub=a-b-c;
    return sub;
}
int multi(int x,int y,int z){
    int multi = x*y*z;
    return multi;
}
int main(){
    int a = 5,b=2,c=3;
    // cin>>a>>b>>c;
    int sum =add(a,b,c);   //ese es tarah bhi likh sakte hai 
    cout<<"the total sum "<<sum<<endl;           //cout<<add(a,b);
    int substraction =sub(a,b,c);   //ese es tarah bhi likh sakte hai 
    cout<<"the total sum "<<substraction<<endl;
    int mult =multi(a,b,c);
    cout<<"the total multipli "<<mult;
    return 0;

}
// int add(int a,int b,int c){
//     int sum=a+b+c;
//     return sum;
// }
// int multi(int x,int y,int z){
//     int multi = x*y*z;
//     return multi;
// }