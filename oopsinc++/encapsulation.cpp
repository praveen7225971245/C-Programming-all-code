#include <iostream>
using namespace std;
class temp{
     int a;
  int b;
  int ans;
  public:
  int add(int x,int y){
    a=x,b=y;
    ans = a+b;
    return ans;
  }
};

int main() {
  int p;
  cout<<"enter the value :";
  cin>>p;
  int q;
  cout<<"enter the value :";
  cin>>q;
  temp half;
  int ans=half.add(p,q);
  cout<<"half of value ;"<<ans<<endl;
   
}