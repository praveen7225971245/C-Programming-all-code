// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the row :";
//     cin>>n;
//     // cout<<"enter the coloum :";
//     // cin>>m;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
//................................2nd(trangular).....................................
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the row :";
    cin>>n;
    // cout<<"enter the coloum :";
    // cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}