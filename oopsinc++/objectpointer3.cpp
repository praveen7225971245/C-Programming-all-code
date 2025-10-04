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
void change(Cricketer* c){
    c->avg=68.9;       //(*c).avg=68.9;
}
int main(){

    Cricketer c1("virat Kohli",25000,54.8); 
    //    cout<<c1.avg<<endl;
    //    change(&c1);
    //    cout<<c1.avg<<endl;

    // Cricketer c2("Rohit sharma",18000,45.8); 
   
   Cricketer*p1=&c1;
   cout<<p1->runs<<endl;  //c1.avg = 77.5
   cout<<c1.avg<<endl;
   p1->avg = 77.4;      //(*p1).avg = 77.6
   cout<<c1.avg<<endl;

}