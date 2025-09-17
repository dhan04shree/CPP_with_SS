//Friend function can become friend to more than one class
#include<iostream>
using namespace std;
class B;//error solved
class A{
    private:
    int a;
    public:
    friend void fun(A,B);
    void setData(int x){
        a = x;
    }
    void showData(){cout<<"a = "<<a<<endl;}
};
class B{
    private:
    int b;
    public:
    friend void fun(A,B);
    void setData(int y){
        b=y;
    }
    void showData(){cout<<"b ="<<b<<endl;}

};
void fun(A o1,B o2){
    cout<<"Sum is "<< (o1.a) + (o2.b);
}
int main(){

    A a1;
    B b1;
    a1.setData(3);
    b1.setData(6);
    fun(a1,b1); 

}