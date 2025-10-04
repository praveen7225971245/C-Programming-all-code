#include<iostream>
using namespace std;
class Vehicle{
public:
      int topspeed;
      float mileage;
      string fuel;
      
      void car(){
        cout<<"it is very costly ";
      }
};
class Twowheeler: public Vehicle{         //multilevel inheritance   /derived class
    public:
    int tyre;
};
class Fourwheeler: public Vehicle{         //multilevel inheritance  /derived class
    public:
    int gear;
};
class Scooty: public Twowheeler{           //multilevel inheritance  /derived class
    public:
    int light;
    float backspace;
};
class Bike: public Twowheeler{          //multilevel inheritance  /derived class
    public:
    int tyre;
    float backspace;
};
void print(Vehicle v){
    cout<<v.mileage<<" "<<v.topspeed<<" "<<endl;
}
int main(){
    Bike v;
    v.car();
       v.mileage =67.9;
       v.topspeed=74;
       v.tyre = 89;
       print(v);
       cout<<v.tyre;
}  