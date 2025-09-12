#include<iostream>
using namespace std;
//main ke bahr define hui hai //global definition //is structure ko pure program me kahise bhi use kra ja skta hai
struct book{  
    private:                
        int bookid;
        char title[20];
        float price;
    public:
        void input2(){ //member function
            cout<<"I am Input2"<<endl;
            cout<<"Enter bookid,title,price"<<endl;
        cin>>bookid>>title>>price;
        if(bookid<0){
            bookid -= bookid;
        }
        }

        void display2(){
            cout<<"I am display2"<<endl;
            cout<<bookid<<title<<price;
        }
    }b2;

    
// book b2;

void display(book); //function declaration

book input();

int main(){
    // struct book{ //local define
    //     int bookid;
    //     char title[20];
    //     float price;
    // };
    // struct book b1= {100,"cpp",450.6}; //in cpp struct here is optional
    // book b2 ;
    // b2.bookid = 101;
    // book b3;
    // b3 = b2;

    // b1=input(); //function call
    // display(b1);


    book b3;
    b3.input2();
    b3.display2();
}
//function defination
// void display(book b){
//     cout<<b.bookid<<" "<<b.title<<" "<<b.price<<endl;
// }
// book input(){
//     book b;
//     cout<<"Enter bookid,title,price"<<endl;
//     cin>>b.bookid>>b.title>>b.price;  
//     return b;
// }