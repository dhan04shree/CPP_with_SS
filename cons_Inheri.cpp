#include<iostream>
using namespace std;
class A{
    int a;
    public:
    A(int k){
        a = k;
    }
    ~A(){}

};
class B : public A{
    int b;
    public:
    B(int x ,int y) : A(x){ 
        b = y;
    }
    ~B(){}
};
int main(){
    B obj(3,5); //hmne B ka obj bnaya to B cons call hui aur usne A cons ko call kr diya
    //execution flow A cons -> B cons
    //execution flow B destru -> A destru
    //call flow B cons -> A cons

}