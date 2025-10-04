#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    char str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }
    }
    cout<<"Number of vowels in the string: "<<count<<endl;
    
    

    return 0;
}