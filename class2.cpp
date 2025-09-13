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
        Complex add(Complex c){
            Complex temp;
            temp.a = a + c.a;
            temp.b = b + c.b;
            return temp;
        }

};

int main(){
    Complex c1,c2,c3;
    c1.set_data(3,6);
    c2.set_data(7,3);
    // c1.show_data();
    // c3 = c1 + c2; //error
    c3 = c1.add(c2);
    c3.show_data();
}
