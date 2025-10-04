#include<iostream>
using namespace std;
class Fraction{
public:
    int num;        //numerater
    int den;        //denomrater
    Fraction(int n,int d){     //constructer
            num=n;
            den=d;
    }
    void display(){
        cout<<num<<"/"<<den<<endl;
    }
    // Fraction add(Fraction f){        //1st Fraction f1 ka hai and 2nd fraction f2 ka hai
    Fraction operator+(Fraction f){   // ham eski jagh ye bhi likh sakte hai
        int newNum = num * f.den + f.num * den;        // a*d + c*b
        int newdem = den * f.den;                      //    b*d
        Fraction ans(newNum,newdem);        // ans yha print hoga 
        cout<<"ans = ";
        return ans;

    }
    Fraction operator-(Fraction f){   
        int newNum = num * f.den - f.num * den;        // a*d - c*b
        int newdem = den * f.den;                      //    b*d
        Fraction ans(newNum,newdem);        // ans yha print hoga 
        cout<<"ans = ";
        return ans;
    }
    Fraction operator*(Fraction f){   
        int newNum = num  * f.num ;        // a*c
        int newdem = den * f.den;          //    b*d
        Fraction ans(newNum,newdem);       // ans yha print hoga 
        cout<<"ans = ";
        return ans;

    }
};
int main(){
    Fraction f1(1,2);
    Fraction f2(1,4);
    f1.display();
    f2.display();
    // Fraction f3 =f1.add(f2);     
    Fraction f3 = f1+f2;        // ham eski jagh ye bhi likh sakte hai
    f3.display();
    Fraction f4 = f1-f2;
    f4.display();
    Fraction f5 = f1*f2;
    f5.display();
}