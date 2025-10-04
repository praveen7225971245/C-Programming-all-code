#include<iostream>
using namespace std;
class Car{
public:
   string name;
   int price;
   float seats;
   Car(){        //Default Constructor

   }
   Car(string n,int p, float s){    //parameterised constructor 
    name =n;
    price =p;
    seats =s;
   }
};
   void print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<endl;
   }
int main(){
    Car c1("toyota",7000000,5);  //object 
    

    Car c2;  //object 
    c2.name ="toyota";
    c2.price =20000000;
    c2.seats = 5;

    // Car c3;  //object 
    // c3.name ="toyota";
    // c3.price =20000000;
    // c3.seats = 5;
    print(c1);
    print(c2);
    // print(c3);
}