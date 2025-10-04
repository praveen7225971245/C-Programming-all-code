#include<iostream>
using namespace std;
int add (int ,int );//prototype use
// int add(int num1,int num2){
//     int sum=num1+num2;
//     return sum;
// }
int main(){
    int a=5;
    int b=6;
    int sum =add(a,b);   //ese es tarah bhi likh sakte hai 
    cout<<sum;           //cout<<add(a,b);
    return 0;

}
int add(int num1,int num2){
    int sum=num1+num2;
    return sum;
}