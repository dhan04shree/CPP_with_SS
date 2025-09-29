//It ensures that when you delete a derived-class object through a base-class pointer, the correct destructor (derived → base) is called.
#include<iostream>
using namespace std;
class A{
    private:
    int a;
    public:
    void fun1(){ cout<<"fun1\n"; }
    virtual ~A(){ cout << "A destroyed\n";}
    virtual void fun2(){  }

};
class B : public A{
    int b;
    public:
    void fun2(){ cout<<"fun2\n"; }
    ~B(){ cout << "B destroyed\n"; }

};
int fun();
int fun(){
    A *p = new B;
    p->fun1();
    p->fun2();
    delete p;

}
int main(){
 fun();
}