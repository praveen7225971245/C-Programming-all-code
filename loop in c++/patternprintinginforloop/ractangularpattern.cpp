//....................1st (*reactangular)..............
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"enter the row :";
//     cin>>n;
//     cout<<"enter the coloum :";
//     cin>>m;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
//................2nd(numerical recangular)..................
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the row :";
//     cin>>n;
//     // cout<<"enter the coloum :";
//     // cin>>m;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }
// .............3rd.(series rectanglar).................
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"enter the row :";
//     cin>>n;
//     cout<<"enter the coloum :";
//     cin>>m;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             if((i+j)%2==0){
//                 cout<<" 1 ";
//             }
//             else{
//                 cout<<" 0 ";
//             }
//         }
//         cout<<endl;
//     }
// }
//..................4rt (rectangular)...............
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the row :";
//     cin>>n;
//     // cout<<"enter the coloum :";
//     // cin>>m;
//     for(int i=1;i<=n;i++){
//         for(int j=i;j<=n;j++){
//             cout<<j;
//         }
//         for (int j= 1; j <= (i-1); j++){
//         cout<<j;
//         }
//         cout<<endl;
//     }
// }
//....................5th(rectangular)....................
