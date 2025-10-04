
#include <iostream>
using namespace std;
int reverseno(int i){
    static int reminder ,reverse = 0;
    if(i>0){
        reminder = i%10;
        reverse = reverse * 10 +reminder;
        reverseno(i/10);
    }
    return reverse;
}
int main(){
    int n;
    cout<<"Enter the number to reverse: ";
    cin>>n;
    int rev = reverseno(n);
    cout<<rev;
    return 0;
    
}