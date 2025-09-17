//Overloading of Insertion(<<) and extraction(>>) operators
// overloading of >> & << operator is possible only by making the friend function
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
        friend ostream& operator <<(ostream&, Complex);
        friend istream& operator >>(istream&, Complex&);//actual value me change ho isliye we take a reference variable
        
};
ostream& operator <<(ostream& ddout, Complex o1){
            ddout<<" a = "<<o1.a<<" b = "<<o1.b<<endl; 
            return ddout; 
        }
istream& operator >>(istream& ddin, Complex& o1){ 
            ddin>>o1.a>>o1.b; 
            return ddin;
        }

int main(){
    Complex c1;
    // c1.set_data(5,2);
    // cin.operator>>(c1);
    // operator>>(cin,c1);
    cin>>c1;
    cout<<c1;
    // cout.operator<<(c1);  //only operator over
    //operator<<(cout,c1); //with friend fun
    //iska retrun type ostream kuy hai? => kyuki cout<<c1<<c2 isme cout<<c1 ye return "cout" krega aur again cout<<c2 call hoga.
    // c3.show_data();
}