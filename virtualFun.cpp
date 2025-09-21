#include<iostream>
using namespace std;
//Base class pointer can point to the object of any of its descendant class
//But its converse is not true.
class A{
    public:
    virtual void f1(){cout<<"I am class A f1"<<endl; }
};
class B : public A{
    public:
    void f1(){ cout<<"I am class B f1"<<endl;} //function overrinding
};
int main(){
    A *p , o1;
    B o2;
    // p = &o1;
    p = &o2;
    p->f1(); //early binding //A
    //if we use virtual in f1 then it decide in runtime & do late binding.
    //pointer ke type ko aadhar nhi mana jayenga pointer ke content ke type consider hoga.
}