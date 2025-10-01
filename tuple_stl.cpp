//tuple
//just like in pair,we can pair two heterogeneous objects, in tuple we can pair multiple objects.
#include<iostream>
#include<tuple>
using namespace std;
int main(){
    tuple <string, int, int> t1;
    t1 = make_tuple("dhanshree",21,1);
    cout<<get<0>(t1); //dhanshree
    cout<<get<1>(t1); //21
    cout<<get<2>(t1); //1
    //0 = dhanshree, 1 = 21 //position number
}