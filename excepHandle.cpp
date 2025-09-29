#include<iostream>
using namespace std;
int main(){
cout<<"Welcome";
int i = 3;
try{
    // throw 10; //only writing this. occur runtime error //terminate function call and it call then to abort function.
    cout<<"In try";//not print
    if(i == 1) throw 1;
    if(i == 2) throw "hello";
    if(i == 3) throw 3.4;
}  
//   catch(int e){
//     cout<<"\n"<<e<<endl;
//  }
catch(...){
    cout<<"\n Catched"<<endl;
}
    cout<<"Last line"<<endl;

}