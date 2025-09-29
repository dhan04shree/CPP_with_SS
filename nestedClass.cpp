#include<iostream>
#include<string.h>
using namespace std;
class Student{
    private:
    int rollno;
    char name[20];
    class Address{
        private:
        char building[20], street[20],city[20], state[20], pincode[10];
        public:
        void setAddress(const char *b, const char *s, const char *c, const char *st, const char *p){
            strcpy(building,b);
            strcpy(street,s);
            strcpy(city,c);
            strcpy(state,st);
            strcpy(pincode,p);
        }
        void showAddress(){
            cout<<"\nBuilding : "<<building<<"\n";
            cout<<"Street : "<<street<<"\n";
            cout<<"City : "<<city<<"\n";
            cout<<"State : "<<state<<"\n";
            cout<<"Pincode : "<<pincode<<"\n";
        }
    };
    Address obj;
    public:
    void setRollno(int r){
        rollno = r;
    }
     void setName(const char *n){
        strcpy(name,n);
    }
    void setstuAddress(const char *b, const char *s, const char *c, const char *st, const char *p){
        obj.setAddress(b,s,c,st,p);
    }
    void showStudent(){
        cout<<"Roll No: "<<rollno<<"\n";
        cout<<"Name: "<<name<<"\n";
        obj.showAddress();

    }
};
int main(){
    Student s1;
    s1.setRollno(8016);
    s1.setName("Dhanshree");
    s1.setstuAddress("Siddhi Heights","Dd road","Pune","MH","455590");
    s1.showStudent();

}