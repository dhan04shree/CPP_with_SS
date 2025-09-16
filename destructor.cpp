#include<iostream>
using namespace std;
class Complex{
    private:
    int a,b;
    public:
    ~Complex(){ //destructor //it takes no arguments (No overloading is possible) //agar hmne nhi bnaya to bhi compiler implicitly destructor bnata hai 
        //It is invoked implicitly when object is going to destroy
        cout<<"Destructor"<<endl;
    }
};
void fun(){
    Complex obj;

}
int main(){
    fun();
}