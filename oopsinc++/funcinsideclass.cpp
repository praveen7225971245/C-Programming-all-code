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
    void print(){
    cout<<name<<" "<<runs<<" "<<avg<<endl;
   }
   int matches(){
    return runs/avg;
   }
};
int main(){

    Cricketer c1("virat Kohli",25000,54.8); 
    Cricketer c2("Rohit sharma",18000,45.8); 
    c1.print();
    c2.print();
    cout<<"matches are playing "<<c1.matches()<<endl;
    cout<<"matches are playing "<<c2.matches();
}