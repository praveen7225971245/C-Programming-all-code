#include <iostream>
using namespace std;
int main() {
    int a ;
    cout<<"starting table ";
    cin>>a;
    int b ;
    cout<<"ending table";
    cin>>b;
    for(int i =a;i<=b;i++){
         for(int j = 1;j<=10;j++){
             cout<<i*j<<" ";
         }
         cout<<endl;
           
    }
    return 0;
}

// using while loop in multiplication table in c++
// #include <iostream>
// using namespace std;
// void multiplication(int x,int y){
//     int temp =x;
//     while(temp<=y){
//         int i=1;
//         while(i<=10){
//             cout<<temp*i<<" ";
//             i++;
//         }
//         temp++;
//         cout<<endl;
//     }
// }
// int main() {
//     int a ;
//     cout<<"starting table ";
//     cin>>a;
//     int b ;
//     cout<<"ending table";
//     cin>>b;
//     multiplication(a,b);
//     return 0;
// }