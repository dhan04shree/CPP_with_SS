#include<iostream>
using namespace std;

int add(int,int,int=0); //default argument

int add(int x , int y,int z){
    return x + y+z;
}
int main(){
    int a , b,c;
    cin>>a>>b;
    cout<<"Enter three numbers"<<endl;
    cin>>a>>b>>c;

    cout<<"Sum is"<<add(a,b,c)<<endl;
    cout<<"Sum is"<<add(a,b)<<endl;

}