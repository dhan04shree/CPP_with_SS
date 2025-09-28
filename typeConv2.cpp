// 2. class type to primitive type

//Complex c1;
//c1.setData(2,4);
// int x;
//x = c1; //error

//class type to primitive type can be implemented with casting operator
// operator dtype(){
    // return (dtype-data)
// }
#include<iostream>
using namespace std;
class Complex {
        private:
            int a,b;
        public:
        
            void set_data(int x,int y){
                a = x;
                b = y;
            }
            void show_data(){
                cout<<"\n a = "<<a<<"\n b = "<<b;
            }
            operator int(){
                return (a);
            }
    };
int main(){
    Complex c1;
    c1.set_data(3,4);
    // c1.show_data();
    int x =5;
    x = c1; //x = c1.operator int();
    cout<<"x = "<<x<<endl;
}