//pair is a template class in standard template library
//pair is not a part of container
#include<iostream>

using namespace std;
class Student{
    string name;
    int age;
    public:
    void setStud(string s,int a){
        name = s;
        age = a;
    }
    void showStud(){
        cout<<"Name: "<<name<<" Age: "<<age<<endl;  
    }
};
int main(){
    pair <string,int> p1;
    pair <string,Student> p2;
    p1 = make_pair("Dhano",21);
    Student s1;
    s1.setStud("Dhanshree",20);
    p2 = make_pair("India",s1);

    // cout<<p1.first<<endl; //Dhano
    // cout<<p1.second<<endl; //21

    cout<<p2.first<<endl;
    Student s = p2.second;
    s.showStud();
}