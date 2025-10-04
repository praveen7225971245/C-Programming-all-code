#include<iostream>
using namespace std;
class Scooty{         //parent class
public:
    int topSpeed;
    float mileage;
    virtual void sound(){
        cout<<"Vroom Vroom"<<endl;
    }
};
class Bike : public Scooty {           //child class /derived class
public:
    int gears;
    void sound(){
        cout<<"dhroom dhroom"<<endl;
    }
};
class SuperBike : public Scooty {           //child class /derived class
public:
    void sound(){
        cout<<"zroom zroom"<<endl;
    }
};
int main(){
    // Bike* b =new Bike;
    // (*b).sound(); 
    // b->gears=6;
    // cout<<b->gears<<endl;     // object pointer
    // Scooty* s =new Scooty;
    // s->sound();        //es tarh bhi likh sakte hai object pointer
    Scooty* b =new Bike;
    (*b).sound();      // object pointer
    Scooty* S =new SuperBike;
    (*S).sound();   

    
}