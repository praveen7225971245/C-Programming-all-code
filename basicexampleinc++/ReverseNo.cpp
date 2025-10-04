#include <iostream>
using namespace std;
int main(){
    int i,reminder;
    cout<<"Enter the number to reverse: ";
    cin>>i;
    int reverse = 0;
    while(i>0){
        reminder = i%10;
        reverse = reverse * 10 +reminder;
        i = i / 10;
    }
    cout<<reverse;
    return 0;
    
}