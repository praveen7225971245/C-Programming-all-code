#include<iostream>
using namespace std;
class Vehicle{
public:
      int topspeed;
      float mileage;
      string fuel;
};
class Bike: public Vehicle{         //single inheritance
    public:
    int tyre;
};
class Car: public Vehicle{           //single inheritance
    public:
    int tyre;
    int window;
};
class Truck: public Vehicle{          //single inheritance
    public:
    int tyre;
    int window;
};
void print(Vehicle v){
    cout<<v.mileage<<" "<<v.topspeed<<" "<<endl;
}
int main(){
    Vehicle v;
    Truck t;
       v.mileage =67.9;
       v.topspeed=74;
       print(v);
       t.window=2;
       cout<<t.window;
}      