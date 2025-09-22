#include<iostream>
using namespace std;
//the keyword template is used to define function template and class template
//It is a way to make your function or class generalize as far as data type is concern. 
//function template/generic function

// int big(int x,int y){
//     if(x > y){
//         return x;
//     }else{
//         return y;
//     }
// }
// float big(float x,float y){
//     if(x > y){
//         return x;
//     }else{
//         return y;
//     }
// }
template <class X, class Y> X big(X x,Y y){
    if(x > y){
        return x;
    }else{
        return y;
    }
}
int main(){
    cout<<big(7,8.0001f)<<"\n";
    cout<<big(9.1,3.5f);


}          