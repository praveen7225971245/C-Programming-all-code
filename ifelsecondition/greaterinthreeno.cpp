// ...................first method.....................
// #include<iostream>
// using namespace std;
// int main (){
//     int n1,n2,n3;
//     cout<<"enter the three value :";
//     cin>>n1>>n2>>n3;
//     if(n1>n2){
//         if(n1>n3){
//             cout<<" is ";
//             cout<<n1;
//         }
//     }
//     if(n2>n1){
//         if(n2>n3){
//             cout<<" is :";
//             cout<<n2;
//         }
//     }
//     else{
//         cout<<" is "; 
//         cout<<n3;
//     }
// } 
//.............................second method...............................
#include<iostream>
using namespace std;
int main (){
    int n1,n2,n3;
    cout<<"enter the three value :";
    cin>>n1>>n2>>n3;
    if(n1>n2 && n1>n3){
            cout<<" is ";
            cout<<n1;
        }
    if(n2>n1 && n2>n3){
            cout<<" is :";
            cout<<n2;
        }
    else{
        cout<<" is "; 
        cout<<n3;
    }
} 