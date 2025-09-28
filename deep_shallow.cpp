#include <iostream>
using namespace std;

class Array {
    int* data;
public:
    Array(int val) {
        data = new int(val); // Note: This allocates a single int, not an array.
    }
    ~Array() {
        cout<<*data<<endl;
        delete data; // This will be called twice for the same memory address
    }
};

int main() {
    Array a1(5);
    Array a2 = a1; // Shallow copy occurs here
} // Destructor for a2 runs, then destructor for a1 runs -> CRASH
