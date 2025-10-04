// AP -> 4,7,10,13................n term
//.........................1st method .......................................
// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"enter the value :";
//     cin>>n;
//     for(int i=4;i<=3*n+1;i=i+3){
//         cout<<i<<endl;
//     }
// } 
//............................2nd method...............................
#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the value :";
    cin>>n;
    int a=4;
    for(int i=1; i<=n; i++){
        cout<<a<<endl;
        a=a+3;
    }
} 