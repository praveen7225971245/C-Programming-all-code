#include<iostream>
using namespace std;
class Student{
public:
       int rollno;
       string name;
       Student(){
        
       }
       Student(int r,string n,float m){
        rollno = r;
        name = n;
        marks = m;
       }
// int print(){
//     cout<<rollno<<" "<<name<<" "<<marks<<" "<<endl;
// }   
    float getmarks(){           //getter;
        return marks;
    }
    void setmarks(float m){       ///setter;
        marks = m;
    }
     private:
     float marks;
};
int main(){
    Student s1(76,"praveen",89.6);
    // s1.rollno = 75;
    // s1.name = "praveen";
    // s1.marks=81.3;

    //   s1.print();
    s1.setmarks(98.7);
    cout<<s1.getmarks();
}
