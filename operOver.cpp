#include<iostream>
using namespace std;
class Complex{
    private:
    int a,b;
    public:
    void setData(int x,int y){
        a = x;
        b = y;
    }
    void showData(){
        cout<<"a = "<<a<<" b = "<<b<<endl;
    }
    Complex operator +(Complex c){ // Complex add(Complex c){
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
    Complex operator - (){
        Complex temp;
        temp.a = ++a;
        temp.b = ++b;
        return temp;
    }
};
int main(){
    Complex c1,c2,c3;
    c1.setData(3,4);
    c2.setData(5,6);
    // c3 = c1 + c2; //error
    // c3 = c1.add(c2); //if we replace add into + we have to put operator keyword. //also we can call like c3 = c1 + c2 
    // c3 = c1.operator +(c2); //one way to call
    c3 = c1 + c2; //second way to call
    c3.showData();
    //when an operator is overloaded with multiple jobs,it is known as operator overloading,
    //It is a way to implement compile time polymorphism.
    //sizeof , :? is not allowed

    //unary operator overloading
    Complex c4,c5;
    c4.setData(6,7);
    // c4 =- c5;
    c5 = c4.operator-();
    c5.showData();
}