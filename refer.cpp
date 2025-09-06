#include<iostream>
using namespace std;
int main(){
    // ordinary variable
    int x = 5;

    //pointer variable
    int *p = &x;
    cout<<"x = "<<x<<endl;//5
    cout<<"*p = "<<*p<<endl;//5
    cout<<"p = "<<p<<endl;//0x61ff04
    cout<<"&x = "<<&x<<endl;// 0x61ff04
    cout<<"*p++ = "<<*p++<<endl;//5
    cout<<"p++ = "<<p++<<endl;// 0x61ff08
    cout<<"p = "<<p<<endl;// 0x61ff0c
    cout<<"*p = "<<*p<<endl;//6422284
    cout<<"&x = "<<&x<<endl; //0x61ff04
    cout<<"x = "<<x<<endl;//5

    //reference variable
    cout<<"Reference Variable"<<endl;
    int a = 10;
    int &y = a;
    cout<<"a = "<<a<<endl;//10
    cout<<"&y = "<<&y<<endl;//0x61ff00
    cout<<"&a = "<<&a<<endl;//0x61ff00
    cout<<"y = "<<y<<endl;//10
    cout<<"y++ = "<<y++<<endl;//10
    cout<<"y = "<<y<<endl;//11
    cout<<"a = "<<a<<endl;//11
}