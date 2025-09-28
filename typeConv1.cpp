// 1.Premitive type to class type conversion
//Complex c1;
//int x = 5;
//c1 = x; //error

//int , char , float double are primitive types
// class type is any class you defined
//primitive to primitive conversion is automatic (like int to float)

//primitive type to class type can be implemented through constructor
#include<iostream>
using namespace std;
class Complex {
        private:
            int a,b;
        public:
        Complex(){ } //default
            Complex(int k){
                a = k;
                b = 0;
            }
            void set_data(int x,int y){
                a = x;
                b = y;
            }
            void show_data(){
                cout<<"\n a = "<<a<<"\n b = "<<b;
            }
    };
int main(){
    Complex c1;
    int x = 5;
    c1 = x;//c1.Complex(x)
    c1.show_data();
}