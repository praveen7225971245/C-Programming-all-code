#include<iostream>
using namespace std;
class Cricketer{
public:
   string name;
   int runs;
   Cricketer(string name,int runs){    
    this->name = name;
    this->runs = runs;
   }
};
   void print(Cricketer c){
    cout<<c.name<<" "<<c.runs<<endl;
   }
int main(){

    Cricketer c1("virat Kohli",15000); 
    Cricketer c2("Rohit sharma",10000); 
    print(c1);
    print(c2);
}