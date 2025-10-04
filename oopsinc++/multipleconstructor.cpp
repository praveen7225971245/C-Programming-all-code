#include<iostream>
using namespace std;
class Car{
public:
   string name;
   int price;
   float seats;
//    Car(int p){   //single parameterised constructor ...........4
//       price=p;
//    }
   Car(){        //Default Constructor..........1

   }
   Car(string n,int p){    //parameterised constructor ...........2
    name =n;
    price =p;
   }
   Car(string n,int p, float s){    //multiple constructor...........3 
    name =n;
    price =p;
    seats =s;
   }
   Car(int p,float s, string n){    //multiple constructor...........5
    name =n;
    price =p;
    seats =s;
   }

};
   void print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<endl;
   }
int main(){
    Car c1("thar",7000000);  //object 
    c1.seats=4;

    Car c2;  //object 
    c2.name ="toyota";
    c2.price =20000000;
    c2.seats = 5;

    Car c3("Bloro",50000000,9);  //object 
    Car c5(4000000,7,"rolce");
    // Car c4(40);
    c2.seats = 5;
    c2.name ="toyota";

    print(c1);
    print(c2);
    print(c3);
    // print(c4);
    print(c5);
}