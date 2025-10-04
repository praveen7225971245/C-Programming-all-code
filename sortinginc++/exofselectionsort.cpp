#include<iostream>
// #include<string>
using namespace std;
void selectionsort(string fruits[],int n){
    for (int i = 0; i < n-1; i++){
        int min_index = i;
        for (int j =i+1; j < n; j++){
            if(fruits[j]<fruits[min_index]){
                min_index =j;
            }
        }
        if(min_index!=i){
            swap(fruits[i],fruits[min_index]);
        }
    }
    return ;
}
int main (){
    string fruits[]={"papaya","lime","watermelon","apple","mango","kiwi"};
    int n = sizeof(fruits)/sizeof(fruits[0]);
    selectionsort(fruits,n);
    for(int i=0;i<n;i++){
        cout<<fruits[i]<<" ";
    }
    cout<<endl;
}