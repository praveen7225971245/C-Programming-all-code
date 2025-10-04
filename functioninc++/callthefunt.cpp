#include<iostream>
using namespace std;
int add(int num1,int num2){
    int sum=num1+num2;
    return sum;
}
void funt(string name){
    cout<<"welcome all the cummety "<<name<<endl;

}
int sub(int num3,int num4){
    int sum=num3-num4;
    return sum;
}
int main(){
    funt("praveen");
    int a=5;
    int b=6;
    int c=9;
    int d=8;
    cout<<add(a,b)<<endl;
    cout<<sub(c,d);
    return 0;
}
