//Member function of one class can become friend to another class
#include<iostream>
using namespace std;
class A{
    public:
    void fun(){}
    void foo(){}
};
class B{
    friend void A:: fun(); //ye fun konse class ka member function hai ya koi class ka nhi hai ye samaj nhi aa rha isliye it is important to mention that which class function it is for that we use scope resolution operator (A ::)
    friend void A:: foo();
    friend class A; //if we want class A all functions can become friend of B then we write this
};
int main(){

}