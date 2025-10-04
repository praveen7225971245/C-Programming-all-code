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

void insertAthead(node* &head,int value){  //passing the head by reference 
    node* n = new node(value);             //creating a new node with value
    n->next = head;                          //next of n is pointing to the head
    head = n;                              //head is pointing to n
}
void display(node* head){
    node* temp = head;                    //temp is pointing to the head   
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}


int main(){
    node* head = NULL;  //head is a pointer to the node class  
    insertAthead(head,1);   //inserting 1 at the head
    display(head);         //displaying the linked list
    insertAthead(head,2);
    display(head);
}