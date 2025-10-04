#include<iostream>
using namespace std;
bool checkeligible(int age,int limit){
    if (age >= limit)
    {
        return true ;
    } else{
        return false;
    }
}
int main (){
    int voating_limit=18;
    int is_check_eligible_voting = checkeligible(16,voating_limit);
    if(is_check_eligible_voting){
        cout<<"yes,this is eligible for voting";
    } else{
        cout<<"no,this is not eligible for voting";
    }
    


}