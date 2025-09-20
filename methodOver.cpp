#include<iostream>
using namespace std;
class A{
    public:
    void f1(){ cout<<"I am class A f1"<<endl; }
    void f2(){ }
};
class B: public A{
    public:
    void f1(){ cout<<"I am class B f1"<<endl; } //method overriding
    void f2(int x){}  //method hiding
};
int main(){
    B obj;
    obj.f1(); //B wala
    //agar latest f1 B me bnaya hai to early binding me B ka f1 aayega agar B me f1 nhi hai to A ka f1 bind hoga  

    // obj.f2();  //error why? bcz compiler find for f2 in B class usko f2 dikhenga B me to compiler A class me nhi dhundega. but compiler bina arguments wala f2 function expect krta hai but usko B me arguments wala dikhta hai isliye it raise error 
    //obj.f2(6)  //B wala
    //same B class scope me f2() aur f2(int x) bnaya hota to error nhi aata kuyki compiler ko B me hi f2 milta jo call hui vo (argu or non argu) that's called method overloading

}