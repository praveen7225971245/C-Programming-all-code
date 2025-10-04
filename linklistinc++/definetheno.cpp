#include<iostream>
using namespace std;

class node{   
    public:   
    int data;    //data
    node* next;   //pointer to the next node  

    node(int value){   //constructor
        data = value;   //data is assigned the value
        next = NULL;     //pointer is assigned NULL
    }
};


int main(){
    node* n = new node(10);    //n is a pointer to the node class  //new node is created with value 10 
    cout<<n->data<<endl;   //10
    cout<<n->next<<endl;   //0
    return 0;
}