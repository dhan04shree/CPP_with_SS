//One class type to another class type

//Item i1;
//Product p1;
//p1.setData(3,4);
//i1 = p1;

//conversion through casting operator - Product class ke aadhar hme casting operator bnanaa pdega
#include<iostream>
using namespace std;
class Item{
    private:
    int a,b;
    public:
    Item(){ }

    Item(int x,int y){
        a = x; b = y;
    }
    void showData(){
        cout<<"a = "<<a<<" b = "<<b<<endl;
    }    
};
class Product{
    private:
    int m,n;
    public:
    void setDate(int x,int y){
        m = x; 
        n = y;
    }
    operator Item(){
        return Item(m,n) ;
    }
    
};


int main(){
    Item i1;
    Product p1;
    p1.setDate(3,4);
    i1 = p1;
    i1.showData();
}