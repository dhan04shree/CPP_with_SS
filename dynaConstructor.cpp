//Dynamic constructor 
//constructor can allocate dynamically created memory to the object
//thus, object is going to use memory region, which is dynamically created by constructor
#include<iostream>
using namespace std;
class A{
    private:
    int a,b,*p;
    public:
    A(){
        a = 4; b = 2; 
        p = new int;
        *p = 5;
    }
    void showData(){
        cout<<"a = "<<a<<" b = "<<b<<" *p = "<<*p<<endl;
    }

};
int main(){
    A a1;
    a1.showData();
}