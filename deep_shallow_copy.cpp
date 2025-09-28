//How we can create a copy of object?
//copy constructor
//default assignment operator(implicit copy assignment operator)

#include<iostream>
using namespace std;
class Dummy{
    private:
    int a,b,*p;
    public:
    Dummy(){
        p = new int;
    }
    void setDate(int x,int y,int z){
        a = x;
        b = y;
        *p = z;
    }         
    void showDate(){
        cout<<"Inside showData";
        cout<<"a = "<<a<<" b = "<<b<<" *p ="<<*p<<endl;
    }
   
    Dummy(Dummy &d){
        // shallow copy
        // creating copy of object by copying data of all member variables as it is.
        a = d.a; 
        b = d.b;
        p = d.p;
    }
    ~Dummy(){
        cout<<"a = "<<a<<" b = "<<b<<" *p ="<<*p<<endl;
        delete p;
    }

    // Dummy(Dummy &d){
    //     a = d.a; 
    //     b = d.b;
    //     // p = d.p;//dono object ke pointer same address ki value lenge to ye share hoga.. hm bas value copy hona chahte hai pr dusre new memory location me.  naki us same memory ka access chahte hai.
    //     p = new int;
    //     *p = *(d.p);
    //     // deep copy
    //     // creating an object by copying data of another object along with the values of memory resources resides outside the object but handled by that object.
    // }
};
int main(){
    Dummy d1;
    d1.setDate(3,4,7); 
    Dummy d2 = d1; //agar hum d2 ko bnate vkt d1 se initialized kre ..usi class ke object ko assign kre to copy constructor call hoga

    // Dummy d2;
    // d2 =d1;//in this situation copy constructor call nhi hoga. yha assignment operator call hoga
    //bydefault compiler copy constructor bnata hi hai pr assignment operator overide krta hai
    d1.showDate();
    d2.showDate();

}