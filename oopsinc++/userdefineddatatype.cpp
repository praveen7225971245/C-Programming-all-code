#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int rollno;
    float cgpa;
};
int main (){
    Student s1;
    s1.name="praveen dwivedi";
    s1.rollno=78;
    s1.cgpa=7.6;
    cout<<s1.name<<" "<<s1.rollno<<" "<<s1.cgpa<<" ";
    cout<<endl;
    Student s2;
    s2.name="raghav das";
    s2.rollno=78;
    s2.cgpa=7.6;
    cout<<s2.name<<" "<<s2.rollno<<" "<<s2.cgpa<<" ";
}