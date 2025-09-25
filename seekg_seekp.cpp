#include<iostream>
#include<fstream>
using namespace std;
int main(){
// ifstream fin;
// fin.open("abc.txt");

// cout<<(char) fin.get();
// cout<<(char) fin.get();
// cout<<(char) fin.get();
// cout<<(char) fin.get();
// cout<<(char) fin.get();
// cout<<(char) fin.get();
// cout<<"\n"<<fin.tellg();
// // fin.seekg(3);//count start from 0
// // fin.seekg(3,ios_base::cur);//count start from curr position(6) and count 3
// fin.seekg(-2,ios_base::end); //last vala index endof hai. mtlab 1 extra than string.
// cout<<"\n"<<fin.tellg();//3
// cout<<"\n"<<(char) fin.get();//a


ofstream fout;
fout.open("abc.txt");


cout<<fout.tellp();
fout.seekp(3);//count start from 0
// fout.seekp(3,ios_base::cur);//count start from curr position(6) and count 3
// fout.seekp(-2,ios_base::end); //last vala index endof hai. mtlab 1 extra than string.
cout<<"\n"<<fout.tellp();//3
fout.close();
}