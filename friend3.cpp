//Overloading of operator as a friend function - binary
#include<iostream>
using namespace std;
class Complex{
    private:
        int a, b; //instance member vairable
    public:
        void set_data(int x,int y){
            a = x;
            b = y;
        }
        void show_data(){
            cout<<"a = "<<a<<endl<<"b = "<<b;
        }
        friend Complex operator +(Complex ,Complex);
        
};
Complex operator +(Complex o1,Complex o2){
            Complex temp;
            temp.a = o1.a + o2.a;
            temp.b = o1.b + o2.b;
            return temp;
        }

int main(){
    Complex c1,c2,c3;
    c1.set_data(4,5);
    c2.set_data(6,3);
    //c3 = c1.operator+(c2);
    c3 = c1 + c2;
    //c3 = operator+(c1,c2);
    c3.show_data();
}