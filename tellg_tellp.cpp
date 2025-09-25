//tellg
//defined in istream class
//its prototypes is= streampos tellg();
//returns the position of the current character in the input stream.

//tellp
//defined in ostream class
//its prototypes is= streampos tellp();
//returns the position of the current character in the output stream.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // ifstream fin;
    // fin.open("abc.txt");
    // int pos;
    // char ch;

    // pos = fin.tellg();
    // cout<<pos;

    // fin>>ch;
    // pos = fin.tellg();
    // cout<<pos;
    // cout<<ch;


    // fin>>ch;
    // pos = fin.tellg();
    // cout<<pos;
    // cout<<ch;

    // fin>>ch;
    // pos = fin.tellg();
    // cout<<pos;
    // cout<<ch; //01h2e3l
    // fin.close()


    //tellp
    ofstream fout;
    fout.open("abc.txt",ios::app);
    int pos;
    char ch;
    pos = fout.tellp();
    cout<<pos;//0
    fout<<"dhanshree";
    pos = fout.tellp();
    cout<<pos;//9
    fout.close();
}