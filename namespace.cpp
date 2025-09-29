//Namespace is a container for identifiers
//it puts the names of its members in a distinct space so that they don't conflict with the names in other namespaces or global namespaces.
//namespace Myspace{
//declarations
//}
//namespace definition doesn't terminates with a semicolon like in class definition
//the namespace definition must be done at global scope, or nested inside another namespace
//you can use an alias name for your namespace name, for ease of use
// namespace ms = MySpace;

//there can be unnamed namespaces too.
// namespace{}

//namespaces can be extended
//A same name namespace definition can be continued and extended over multiple files, they are not redefined or overridden.

//using keyword allows you to import an entire namespace into your program with a global scope
//it can be used to import a namespace into another namespace or any program
#include<iostream>
using namespace std;
namespace MySpace{
    int a ;
    int f1();
    class A{
        public:
        void fun1();
    };

}
int MySpace :: f1(){
    cout<<"hello"<<endl;
}
void MySpace:: A:: fun1(){
    cout<<"i am fun1";
}
// namespace ms = MySpace;
using namespace MySpace;

int main(){
    // MySpace::a=5;
    a = 5;
    f1();
    A a1;
    a1.fun1();
}
