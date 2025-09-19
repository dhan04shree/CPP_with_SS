#include<iostream>
using namespace std;
//A pointer contains address of an object is called Object pointer
//this is  a local object pointer in every instance member function containing address of the caller object
//this pointer can not be modify
//It is used to refer caller object in member function
class Box{
    private:
    int l,b,h;
    public:
    void setDimension(int l,int b ,int h){
        this->l = l;
        this->b = b;
        this->h= h;
    }
    void showDimensions(){
        cout<<"l = "<<l<<" b = "<<b<<" h = "<<h<<endl;
    }
};
int main(){
    Box *p,smallBox;
    smallBox.setDimension(2,3,4);
    smallBox.showDimensions();
    // p = &smallBox;
    // p -> setDimension(7,6,4);
    // p -> showDimensions();

}