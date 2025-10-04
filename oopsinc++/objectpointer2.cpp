#include<iostream>
using namespace std;
class Cricketer{
public:
   string name;
   int runs;
   float avg;
   Cricketer(string n,int r,float a){    
    name = n;
    runs = r;
    avg = a;
   }
};
int main(){

    Cricketer c1("virat Kohli",25000,54.8); 
    // Cricketer c2("Rohit sharma",18000,45.8); 
   
   Cricketer*p1=&c1;
   cout<<(*p1).runs<<endl;  //c1.avg = 77.5
   cout<<c1.avg<<endl;
   (*p1).avg = 77.4;
   cout<<c1.avg<<endl;

}