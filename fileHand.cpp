#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // ofstream fout;
    // fout.open("hello.txt");
    // fout<<"Hello dhanshree";
    // fout.close();

    // ifstream fin;
    // fin.open("hello.txt");
    // char ch;
    // fin>>ch;

    // while(!fin.eof()){
    //     cout<<ch;
    //     fin>>ch;
    // }
    // fin.close(); //Hellodhanshree


    // ifstream fin;
    // fin.open("hello.txt");
    // char ch;
    // ch = fin.get();
    // while(!fin.eof()){
    //     cout<<ch;
    //     ch = fin.get();
    // }
    // fin.close(); //Hello dhanshree

    // ofstream fout;
    // fout.open("hello.txt");
    // fout<<"My name is dhanshree";
    // fout.close();   //it override the previous text

    //default argument=   ios::out
    //ios::in //input/read
    //ios::out //output/write
    //ios::app //append
    //ios::ate //update
    //ios::binary //binary

    ofstream fout;
    fout.open("hello.txt",ios::ate);
    fout<<"i am from pune";
    fout.close();   //it append to previous text
    

}