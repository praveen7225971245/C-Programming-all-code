// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"enter the value :";
//     cin>>n;
//     int digits=0;
//     while (n>0)
//     {
//         digits++;
//         n=n/10;
//     }
//     cout<<digits;
// } 
/*................................2nd method..................................*/
#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the value :";
    cin>>n;
    int digits=0;
    for (;n>0;)
    {
        digits++;
        n=n/10;
    }
    cout<<digits;
} 
