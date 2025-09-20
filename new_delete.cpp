#include<iostream>
using namespace std;
//static memory allocation(SME)
//dynamic memory allocation(DME)
int main(){
    // int *p = new int; //p is SME taking address of new int variable. new int variable is DME. data type should be same.
    // Complex *ptr = new Complex;
    // float *p = new float[5];
    /* 
    int a ;
    cin>>a;
    int arr[a]; //error */
    int x;
    cin>>x;
    int *p = new int[x];
    // delete p; //p delete nhi hora ..p jisko point kr rha vo delete ho rha
    // delete []p;
}