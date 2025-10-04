#include<iostream>
using namespace std;
class Cricketer{
public:
      int runs;
      float wicket;
      string average;
};
class Engineer:public Cricketer{         //multiple inheritance   /derived class
    public:
    int experience;
    int domain;
};
class Phodu :public Engineer{         //multiple inheritance   /derived class
    public:
    string name;
    int runs;
};
void print(Phodu p){
    cout<<p.name<<endl<<p.runs<<endl<<p.experience<<endl<<p.wicket<<endl;
}
int main(){
    Phodu p;
    p.runs=75484;
    p.name= "sourabh netravalkar";
    p.experience=4;
    p.wicket=78;
    print(p);
}  