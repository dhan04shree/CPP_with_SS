#include<iostream>
using namespace std;
class Person{
    //Rule1 : Jis class ke andhar do nothing function hai uska object nhi bn skta.us class ka use krne ke liye aapko child class bnane pdegi
    //RUle2: Aur child class me do nothing function me overriding bhi krni pdegi
    public:
    virtual void fun()=0; //do nothing fun //pure virtual function
    //A class containing pure virtual function is an abstract class
    //We can not instantiate abstract class
    void f1(){ }
};
class Student : public Person{
    public:
    void fun(){ }

};
int main(){
    Person *p;
    Student s;
    p = &s;
    p->fun();
}