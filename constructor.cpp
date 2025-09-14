//constructor is a member function of a class
//the name of the constructor is same as the name of the class
//it has no return type , so can't use return keyword
//it must be an instance member function, that is, it can never be static
//constructor is implicitly invoked when an object is created
//constructor is used to solve problem of initialization.
//What is the problem of intialization?
//What it is called constructor? //
//WHat is problem of initialization?
//how constructor resolves this issue?
//after intialize of any object it is important to intialize their variables some value nhito garbage value se intialize hoga. aur jisko nhi pta vo member function call krega aur error aa skta hai.. 
//constructor object ko object bnatta hai
#include<iostream>
using namespace std;
class Complex{
    private:
    int a,b;
    public:
    Complex(int x,int y){
        cout<<"Hello i am cons"<<endl;
        a = x;
        b = y;
    }
    Complex(int x){ //constructor overloading
        a = x;
        cout<<"a = "<<a<<endl;
    }

};
int main(){
    // Complex c1;
    // Complex c2; //jitne bar object bnavonge utne bar constructor chlega aur "Hello i am cons" print hoga
    // Complex c1(3,5),c2(5);
    Complex c1 = Complex(3,8),c2=5;
}