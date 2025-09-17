/*
Friend function can access any member of the class to which it is friend
Friend function cannot access members of the class directly 
It has no caller object 
It should not be defined with membership label 
 */
#include<iostream>
using namespace std;
class Complex{
    int a, b;
    public:
    void setData(int x,int y){
        a = x;b=y;
    }
    void showData(){cout<<"a = "<<a<<"b ="<<b<<endl;}

    friend void fun(Complex);
};
void fun(Complex c){
    cout<<"a = "<<c.a;
}
int main(){
    Complex c1,c2; 
    c1.setData(3,4);
    fun(c1);
    return 0;
}