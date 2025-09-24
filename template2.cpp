#include<iostream>
using namespace std;
template <class X> class ArrayList{
    private:
    struct ControlBlock{
        int capacity;
        X *arr_ptr;
    };
    ControlBlock *s;

    public:
    ArrayList(int capacity){
        s = new ControlBlock;
        s->capacity = capacity;
        s->arr_ptr = new X[s->capacity];
    }
    void addElement(int index,X data){
        if(index >= 0 && index <= s->capacity - 1){
            s->arr_ptr[index] = data;
        }else{
            cout<<"Array index is not defined"<<endl;
        }
    }
    void viewElement(int index){
        if(index >= 0 && index <= s->capacity -1){   
            cout<<s->arr_ptr[index]<<endl;
        }else{
            cout<<"Array index is not valid"<<endl;
        }
    }
    void viewList(){
        for(int i = 0;i< s->capacity;i++){
            cout<<" "<<s->arr_ptr[i];
        }
    }

};
int main(){
    ArrayList <char> a1(4);
    a1.addElement(0,'a');
    a1.addElement(1,'b');
    a1.addElement(2,'c');
    a1.addElement(3,'d');
    a1.viewList();
    // a1.viewElement(0);
    
}