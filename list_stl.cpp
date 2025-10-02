//list class supports a bidirectional , linear list.
//vector supports random access but a list can be accessed sequentially only
//list can be accessed front to back or back to front
#include<iostream>
#include<list>
using namespace std;
int main(){
    list <int> l1 {22,10,2,34,6,76,45};
    // cout<<l1[0]; //not works here . error
    l1.push_back(10);
    l1.push_front(56);

    // l1.pop_back();
    // l1.pop_front();
    

    l1.sort(); //ascending order
    // l1.reverse(); //reverse hoga
 
    // list <int> :: iterator p = l1.begin();
    // for(l1.begin();p != l1.end();p++){
    //     cout<<*p<<" "; 
    // }
    cout<<endl;
    l1.remove(10);
    l1.remove(455); //no error

    l1.clear();
    cout<<l1.size(); //0
 
    // list <int> :: iterator it = l1.begin();
    // for(l1.begin();it != l1.end(); it++){
    //     cout<<*it<<" ";  
    // }

    // cout<<"\n"<<l1.size();//3

}