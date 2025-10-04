#include<iostream>
using namespace std;
class Car{
public:
   string name;
   int price;
   float seats;
   Car(){        //Default Constructor..........1

   }
   Car(string n,int p, float s){    //multiple constructor...........3 
    name =n;
    price =p;
    seats =s;
   }
};
   void print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<endl;
   }
int main(){

    Car c1;  //object 
    c1.name ="toyota";
    c1.price =20000000;
    c1.seats = 5;

    Car c2=c1;     //but Deep Copy            //copy constuctor ....................7
    c2.name="mahindra";

    Car c3(c1);            //Copy constuctor........ //Real copy constuctor
    c3.name=" thor ";

    print(c1);
    print(c2);
    print(c3);
}