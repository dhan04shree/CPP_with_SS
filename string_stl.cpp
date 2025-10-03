//using null-terminated character arrays are not technically data types
//so c++ operator cannot be applied to them

//string class
//the string class is a specialization of a more general template class called basic_string.
//since defining a class in C++ is creating a new data type, string is derived data type.
//this means operators can be overloaded for the class.

//string is safe than char array
//careless programmer can overrun the end of an array that holds a null terminated string.
//for example , using strcpy()
//string class handle such issues.

//string is in stl
//string is an another container class
//to use string class, you have to include string header
//#include<string>

//string class supports many constructor, some of them are
//string()
//string(const char *str)
//string(const string &str)
     
#include<iostream>
#include<string.h> //string header is different than string.h
#include<string>
using namespace std;
int main(){
    // char s1[10] = "Hello";
    // char s2[10] = "Dhanshree";
    // s2 = s1;  //wrong   
    // strcpy(s1,s2); //correct way
    // cout<<s1;
    // s2 > s1;  //wrong
    // int i = strcmp(s2,s1); 
    // cout<<i;
    // char s3[30] ;
    // s3 = s1 + s2; //wrong
    // strcpy(s3,strcat(s1,s2));
    // cout<<s3;//HelloDhanshree

    // char s[] = "heeeloo";
    // string s4 = s;
    // string s4(s); //pointer pass
    // string s5 = s4; //reference pass
    // string s5(s4); //another way


    string s1 = "heelo";
    string s2("Hello2"); //another way
    string s3 = string("Hello3");//another way


    // string s6 ;
    // s6 = "hello"; //assignment operator call hora hai..not constructor
    // string s7 = " Students";
    // s7 = s6 + s7;
    // s7 += s6;
    // cout<<s7;
    // if(s1 == s2){
    // }
    //if cannot directly compare two char array bcz it compare addresses not value.

    // cout<<s1<<endl<<s2<<endl<<s3;
    // cout<<"ENter string";
    // cin>>s2; //when i give space between words it only takes the first word
    // cout<<"Your String is "<<s2;

    // char str[] = "students";
    // s1 = s1 + str;
    // cout<<s1;

    s1.assign("dhanshree");
    // cout<<s1; //dhanshree

    // s1.append(s2);
    // cout<<s1;

    // s1.insert(4,"raj ");
    // cout<<s1; //dhanraj shree

    // s1.replace(1,2,"D"); //index 1 se start kro aur 2 length characters ko replace kro
    // cout<<s1; //dDnshree

    // s1.erase();
    // cout<<s1<<endl; 

//    int i = s1.find("shree");
//    cout<<i; //4

//    i = s1.find("pooja");
//    cout<<i; //pooja not available then it print -1

   s2 = "onlineuhellouionuiline";
   //indexing always left to right in both cases find or rfind. 
   //but when two same word like ui present in s2 then last ui index value is print by rfind because it iterate from right to left. 
//    int j = s2.find("ui");
//    cout<<"find : "<<j; 
//    j = s2.rfind("ui");
//    cout<<"rfind : "<<j; 
s1 = "aman";
s2 = "amit";
//same hoga to zero print hoga
//"am" dono string me same hai but agar 
// int i = s1.compare(s2); //a ki ascii value small hai i se to a- i = -ve value so -1 print hoga
// int i = s2.compare(s1); //a ki ascii value small hai i se to i-a = +ve value so 1 print hoga
// cout<<i;

char str[5];
// s1 ka data str me copy krne ke liye
// strcpy(str,s1.c_str());
// cout<<str;

cout<<s1.size();//4

}