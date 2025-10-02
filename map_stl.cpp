//maps are used to replicate associative arrays
//maps contain sorted key-value pair ,in which each key is unique and cannot be changed, and it can be inserted or deleted but cannot be altered
//maps always arrange its keys in sorted order
//in case the keys are of string type, they are sorted in dictionary order
#include<iostream>
#include<map>
using namespace std;
int main(){
    map <int,string> Customer;
    Customer[100] = "Gagendra";
    Customer[123] = "Dilip";
    Customer[145] = "Aditya";
    Customer[165] = "Sora";
    Customer[171] = "Era";

    map <int,string> c {
        {100,"HI"},
        {120,"KI"},
        {130,"SI"},
        {160,"GI"},
    };
    
    // cout<<Customer[100]; //Gajendra
    // cout<<Customer[101]; //no error
    // cout<<Customer.at(145); //Aditya
    // cout<<Customer.size(); //5
    // cout<<Customer.empty(); //0 (not empty)
    // Customer.clear(); 
    // cout<<Customer.size(); //0

   Customer.insert( pair <int,string> (5,"Dhanshree")); 
    
    map <int,string> :: iterator p = Customer.begin();
    for(Customer.begin(); p != Customer.end(); p++){
        cout<<p->second<<" ";//Gagendra Dilip Aditya Sora Era 
    }

} 