//It is a process of inheriting properties and behaviours of existing class into a new class
//existing class = old class = parent class = base class
// new class = child class = derived class
/* Types of Inheritance
1. Single Inheritance - Base class : A, Derived class : B
2. Multilevel Inheritance - A -> B -> C
3. Multiple Inheritance - A1 A2 -> B (A1,A2 is base class)(multiple parent class)
4. Hierarchical Inheritance - A -> B1 B2 
5. Hybrid Inheritance
*/
#include<iostream>
using namespace std;

class A{
    private:
    int x;
    protected:
    void setValue(int k){
        x = k;
    }

};

class B : public A{ //(public )kuch nhi likhenge to bydefault private hota hai
//visibility mode : class B ke najar me class A ke public mana jayenga agar hm yha public likhenge to
//agar kisi class me protected visibility mode hai to uske members or functions accessible nhi hai bahr se (int main se) 
//is-a relationship is always implemented as a public inheritance
    public:
    void setData(int a){
        setValue(a);
    }
};
int main(){
 B obj;
 obj.setData(4);
}