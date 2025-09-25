//Initializer list is used to initialize data members of a class.
//the list of members to be initialized is indicated with constructor as a comma separated list followed by a colon.
//why initializer?
//there are situations where initialization of data members inside constructor doesn't work and initializer list must be used.
//1. for initialization of non-static const data members
//2. for initialization of reference members
#include<iostream>
using namespace std;
class Dummy{
    private:
    const int a;
    int &y;
    public:
    Dummy(int &n):a(5),y(n){

    }
};
int main(){
    int m = 6;
   Dummy d1(m);

    
}