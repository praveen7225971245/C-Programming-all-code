#include<iostream>
using namespace std;
class Loading{
public:
      void sum(int a,int b){                //function overloading    /polymerphism
        cout<<a+b<<endl;
      }
      void sum(int a,int b,int c){                //function overloading    /polymerphism
        cout<<a+b+c<<endl;
      }
      void sum(string a,string b){                //function overloading    /polymerphism
        cout<<a+b;
      }
    //   int sum(int a ,int b){
    //     return a+b;
    //   }
};
int main(){
    Loading a;
    a.sum(9,8);
    a.sum(9,8,5);
    a.sum("praveen","dwivedi");
}