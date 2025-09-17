//Overloading of operator as a friend function - unary
#include<iostream>
using namespace std;
class Complex{
    private:
        int a,b; //instance member vairable
    public:
        void set_data(int x,int y){
            a = x;
            b = y;
          
        }
        void show_data(){
            cout<<"a = "<<a<<" b = "<<b<<endl;
        }
        friend Complex operator -(Complex);
        
};
Complex operator -(Complex o1){
            Complex temp;
            temp.a = -o1.a ;
            temp.b = -o1.b;
            return temp;
        }

int main(){
    Complex c1,c3;
    c1.set_data(5,2);
    //c3 = c1.operator-();
    c3 =-c1;
    //c3 = operator-(c1);
    c3.show_data();
}