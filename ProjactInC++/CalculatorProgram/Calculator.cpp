#include<iostream>
using namespace std;
int main(){
    char op;
    double num;
    double result =0;
    cout<<"Enter the operator: ";
    cin>>op;
    cout<<"Enter the number: ";
    cin>>num;
    switch(op){
        case '+':
        while(num!=-1){
            result += num;
            cout<<"Enter the number: ";
            cin>>num; 
        }
        cout<<"The sum is: "<<result;
        break;
        case '-':
        if(num!=-1){
            result = num;
            cout<<"Enter the number: ";
            cin>>num; 
        }
        while(num!=-1){
            result -= num;
            cout<<"Enter the number: ";
            cin>>num; 
        }
        cout<<"The difference is: "<<result;
        break;
        case '*':
        result = 1;
        while(num!=-1){
            result *= num;
            cout<<"Enter the number: ";
            cin>>num; 
        }
        cout<<"The product is: "<<result;
        break;
            
        case '/':
        if(num!=-1){
            result = num;
            cout<<"Enter the number: ";
            cin>>num; 
        } 

        while(num!=-1){
            result /= num;
            cout<<"Enter the number: ";
            cin>>num; 
        }
        cout<<"The division is: "<<result;
        break;
        default:
        cout<<"Invalid operator";
        break;
    }

}