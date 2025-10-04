#include<iostream>
using namespace std;
class node{
    public:
    int value;
    node* next; // like int* ptr;
    node (int value){
        this->value = value;
        this->next = NULL;
    }
};
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->value<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* a = new node(10);
    node* b = new node(20);
    node* c = new node(30);
    node* d = new node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    
    display(a);
}