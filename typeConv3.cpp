//One class type to another class type

//Item i1;
//Product p1;
//p1.setData(3,4);
//i1 = p1;

//conversion through constructor - Item class aadhar constructor ko banana pdega
//conversion through casting operator - Product class ke aadhar hme casting operator bnanaa pdega
#include<iostream>
using namespace std;

class Product{
    private:
    int m,n;
    public:
    void setDate(int x,int y){
        m = x; 
        n = y;
    }
    int getM(){
        return m;
    }
    int getN(){
        return n;
    }    
};
class Item{
    private:
    int a,b;
    public:
    Item(){ }
    Item(Product p){
        a = p.getM();
        b = p.getN();
    }
    void showData(){
        cout<<"a = "<<a<<" b = "<<b<<endl;
    }
};

int main(){
    Item i1;
    Product p1;
    p1.setDate(3,4);
    i1 = p1;
    i1.showData();
}