#include<iostream>
using namespace std;
int sum(int,int);//global declaration
int sub(int *,int *);
int mul(int &,int &);

void fun(){
    cout<<"You are in fun"<<endl;
}

int sum(int x ,int y){ //formal arguments  //call by value
    return x + y;
}
int sub(int *x ,int *y){ //formal arguments  //call by address
    return *x - *y;
}
int mul(int &x ,int &y){ //formal arguments  //call by reference
    return x * y;
}

int main(){
    int x =8,y=9;
    // cin>>x>>y;
    int z = sum(x,y); //actual arguments
    int h = sub(&x,&y);
    int k = mul(x,y);
    cout<<"Sum of "<<x<<" and "<<y<<" is "<<z<<endl;
    cout<<"Sub of "<<x<<" and "<<y<<" is "<<h<<endl;
    cout<<"Mul of "<<x<<" and "<<y<<" is "<<k<<endl;
    //void fun(); //local declaration //only main function allow to call fun function.
    cout<<"You are in main"<<endl;
    fun();
}