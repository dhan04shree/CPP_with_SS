#include<iostream>
using namespace std;
int main(){
    // ordinary variable
    int x = 5;

    //pointer variable 
    // int *p = &x;

    // x = 5
    // *p = 5
    // &p = 0x61ff08
    // &x = 0x61ff0c
    // p = 0x61ff0c
    // ++x = 6
    // *p = 6
    // p = 0x61ff0c
    // &x = 0x61ff0c
    // ++*p = 7
    //x = 7
    // &p = 0x61ff08
    //&x =  0x61ff0c

    // ++p = 0x61ff10
    // *p = 6422320
    // --p = 0x61ff0c
    // --*p = 6

    // --p = 0x61ff08
    // &p = 0x61ff08
    // *p = 6422280
    // &x = 0x61ff0c
    // x = 6


    // int *p = &x;
    // cout<<"x = "<<x<<endl;
    // cout<<"*p = "<<*p<<endl;
    // cout<<"&p = "<<&p<<endl;
    // cout<<"&x = "<<&x<<endl;
    // cout<<"p = "<<p<<endl;
    // cout<<"++x = "<<++x<<endl;
    // cout<<"*p = "<<*p<<endl;
    // cout<<"p = "<<p<<endl;
    // cout<<"&x = "<<&x<<endl;
    // cout<<"++*p = "<<++*p<<endl;
    // cout<<"x = "<<x<<endl;          //
    // cout<<"&p = "<<&p<<endl;
    // cout<<"&x = "<<&x<<endl;

    // cout<<"++p = "<<++p<<endl; 
    // cout<<"*p = "<<*p<<endl;
    // cout<<"--p = "<<--p<<endl;
    // cout<<"*p = "<<*p<<endl;
    // cout<<"--*p = "<<--*p<<endl;
    // cout<<"--p = "<<--p<<endl;

    // cout<<"&p = "<<&p<<endl;
    // cout<<"*p = "<<*p<<endl;
    // cout<<"&x = "<<&x<<endl; 
    // cout<<"x = "<<x<<endl;

//&x = address of x | &p = address of p | p = address of x | ++*p = 6 allowed x = 6
// *p = x = num | //value(++*p | ++x) inc kelyavr address toch raahto | //(p which hold the address of x)(0x61ff0c) (not &p) p inc kel(0x61ff10) nntr dec kel (0x61ff08) which is not as previous . so obviously value becomes change (garbage value)


    //reference variable
    cout<<"Reference Variable"<<endl;
    // int &p = x;

// x = 5
// &p = 0x61ff08
// ++x = 6
// &p = 0x61ff08
// p = 6
// &x = 0x61ff08
// ++p = 7
// p = 7
// &p = 0x61ff08
// --p = 6
// --p = 5
// &p = 0x61ff08
// &x = 0x61ff08
// --p = 5
// &p = 0x61ff08
// --p = 5
// --p = 5
// &p = 0x61ff08
// &p = 0x61ff08
// &x = 0x61ff08
// x = 5
    int &p = x;
    cout<<"x = "<<x<<endl;//5
    cout<<"&p = "<<&p<<endl;  //0x61ff08
    cout<<"&x = "<<&x<<endl;  //0x61ff08
    cout<<"++x = "<<++x<<endl;//6
    cout<<"&p = "<<&p<<endl;//0x61ff08
    cout<<"p = "<<p<<endl;//6
    cout<<"&x = "<<&x<<endl;// 0x61ff08
    // cout<<"++&p = "<<++&p<<endl;//error: increment of read-only location '& p'
    cout<<"++p = "<<++p<<endl;// 7
    cout<<"p = "<<p<<endl;//  7
    cout<<"&p = "<<&p<<endl;//0x61ff08
    cout<<"--p = "<<--p<<endl;//6
    // cout<<"--&p = "<<--&p<<endl;//errror
    cout<<"--p = "<<--p<<endl;// 0x61ff00
    cout<<"&p = "<<&p<<endl;//1977191453
    cout<<"&x = "<<&x<<endl; //0x61ff04
    cout<<"x = "<<x<<endl;//7

    //p - num //x - num // &p = &x //++&p not possible
}