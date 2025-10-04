#include<iostream>
using namespace std;
int main(){
    int choice ,a,b,c;
    cout<<".......................calculator..........................."<<endl;
    cout<<" 1.addition"<<endl;
    cout<<" 2.substraction"<<endl;
    cout<<" 3.multiplication "<<endl;
    cout<<" 4.division "<<endl;
    cout<<"enter the choice :";
    cin>>choice;
    switch (choice)
    {
    case 1 :
    {
        cout<<" enter two no. : "<<endl;
        cin>>a>>b;
        c=a+b;
        cout<<"addition is "<<c;
    }
        break;
    case 2 :
    {
        cout<<" enter two no. : "<<endl;
        cin>>a>>b;
        c=a-b;
        cout<<"substraction is "<<c;
    }
        break;
        case 3 :
    {
        cout<<" enter two no. : "<<endl;
        cin>>a>>b;
        c=a*b;
        cout<<"multiplication is "<<c;
    }
        break;
        case 4 :
    {
        cout<<" enter two no. : "<<endl;
        cin>>a>>b;
        c=a/b;
        cout<<"division is "<<c;
    }
        break;
    default:
    {
        cout<<"invalide choice :";
    }
        break;
    }
}