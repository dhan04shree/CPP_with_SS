#include<iostream>
using namespace std;
//Static local variable //ye C lang me bhi tha
//Static member variable //ye C++ me nya aaya
//Static member functions //ye C++ me nya aaya
void fun(){
    //1. Static Local Variable
    static int x; //1. bydefault x value initialized to 0 not garbage //2. program start hotehi x ko jga milegi. x kabhi destroy nhi hoga during the execution of program.
    int y; //lifetime of y exist until function remains in the stack   
}

//2.Static Member variable
class Account{
    public:
        int balance; //instance member variable
        static float roi; //static member variable //class variable
    public:
        void set_balance(int b){
            balance = b;
        }
        static void set_roi(int r){ //static member function //they can access only the static member variable
            roi = r;
        }
};
float Account:: roi; //bydefault value = 0 //ye likhenge tohi iss variable ko memory milegi //iski memory object pr depend nhi krti //object only balance variable ko acces kr skta hai roi ko nhi
int main(){
    Account a1,a2;
    a1.balance = 110;
    a1.roi = 1.2f;
    a2.roi = 3.4f;
    cout<<a1.roi<<endl<<a2.roi; // 3.4 3.4 ye print hui

    a1.set_roi(5.66f); //ye galat nhi he. but object ko bina bnaye hui bhi call ho skte hai

    Account:: set_roi(6.66f); //static member function call


}