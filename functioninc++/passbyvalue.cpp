#include<iostream>
using namespace std;
void decrease(int n1,int n2){    
    n1--;
    n2=n2-2;
    cout<<n1<<" "<<n2<<endl;
    return ;
}
int main(){
    int p=25;
    int q=13;
    decrease(p,q);
    cout<<p<<" "<<q;
    return 0;
}