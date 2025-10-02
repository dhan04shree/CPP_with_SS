//the most general purpose container is the vector
//it supports a dynamic array
//array size is fixed, no flexibility to grow or shrink during execution
//vector can provide memory flexibilty
// [] = subscript operator
//push_back() is a member function,which can be used to add value to the vector at the end.
//pop_back
//v1.capacity();
//v1.size();
// vector <int> :: iterator it = v1.begin(); //it point to beginnig of vector
// v1.insert(it+3,67);

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v1; //zero lenght vector
    vector <string> v2 {"dhano","pooja","sham"}; //initial capacity is 3
    vector <string> v3(5); //5 element
    vector <string> v6(4,"hi"); //intialize 4 element string vector with "hi";

    // for(int i = 0;i<4;i++){
        // cout<<v6[i]<<" "; //hi hi hi hi 
    // }

    // cout<<v1.capacity(); //0
    // cout<<v2.capacity(); //3
    // cout<<v3.capacity(); //5

    // v1.push_back(10); 
    // cout<<v1.capacity(); //1
    //  v1.push_back(20); 
    // cout<<v1.capacity(); //2
    //  v1.push_back(30); 
    // cout<<v1.capacity(); //4
    //  v1.push_back(40); 
    // cout<<v1.capacity(); //4
    //  v1.push_back(50); 
    // cout<<v1.capacity(); //8

    for(int i = 0;i<=9;i++){
        v1.push_back(10 * (i+1));
    }
    // cout<<"Capacity: "<<v1.capacity()<<endl; //16
    // cout<<"Size: "<<v1.size()<<endl; //10

     for(int i = 0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    // cout<<"After pop_back\n";
    // v1.pop_back();
    // cout<<"\nCapacity: "<<v1.capacity()<<endl; //16
    // cout<<"Size: "<<v1.size()<<endl; //10

    // v1.pop_back();
    // cout<<"\nCapacity: "<<v1.capacity()<<endl; //16
    // cout<<"Size: "<<v1.size()<<endl; //9

    // v1.pop_back();
    // cout<<"\nCapacity: "<<v1.capacity()<<endl; //16
    // cout<<"Size: "<<v1.size()<<endl; //8

    // v1.pop_back();
    // cout<<"\nCapacity: "<<v1.capacity()<<endl; //16
    // cout<<"Size: "<<v1.size()<<endl; //7

    // v1.pop_back();
    // cout<<"\nCapacity: "<<v1.capacity()<<endl; //16
    // cout<<"Size: "<<v1.size()<<endl; //6

    // v1.pop_back();
    // cout<<"\nCapacity: "<<v1.capacity()<<endl; //16
    // cout<<"Size: "<<v1.size()<<endl; //5

    // v1.clear();
    // cout<<"\nCapacity: "<<v1.capacity()<<endl; //16
    // cout<<"Size: "<<v1.size()<<endl; //0

    // cout<<v1.at(10); //runtime error : out of range

    // cout<<"first value is "<<v1.front()<<" "; //10
    // cout<<"last value is "<<v1.back()<<" ";//100

    vector <int> :: iterator it = v1.begin(); //it point to beginnig of vector
    v1.insert(it+3,67); //10 20 30 67 40 50 60 70 80 90 100
    cout<<"\n";
     for(int i = 0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }

}