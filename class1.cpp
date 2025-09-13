#include<iostream>
using namespace std;
//Struct - members are by default public
//Class - members are by default private
//if function created inside class then it is bydefault inline. but when we declare the fun inside and define outside then it explicitely need to add inline to work in function.
class Complex {
        private:
            int a,b;
        public:
            void set_data(int,int);
            // void set_data(int x,int y){
            //     a = x;y
            //     b = y;
            // }
            void show_data(){
                cout<<"\n a = "<<a<<"\n b = "<<b;
            }

    };
//Complex:: =membership label
void Complex:: set_data(int x,int y){
                a = x;
                b = y;
            }

int main(){
    Complex c1;
    // c1.set_data(3,4);
    c1.show_data();
    
}