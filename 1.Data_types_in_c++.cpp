#include<iostream>
using namespace std;

int main() {
    int a; // Declararion
    a = 12; // initialization

    cout << "size of int "<< sizeof(a) << endl;

    float b;
    cout << "size of float "<< sizeof(b) << endl;

    char c;
    cout << "size of char " << sizeof(c) << endl;

    double d;
    cout << "size of double " << sizeof(d) << endl;

    bool e;
    cout << "size of bool " << sizeof(e) << endl;


    return 0;
}

// Type modifiers 
/***********
 1 signed       4 bytes   -2,147,483,648 to 2,147,483,647
 2 unsigned     4 bytes    0 to 4,294,967,295
 3 long         8 bytes   -9,223,372,036,854,775,808 to +9,223,372,036,854,775,808
 4 short        2 bytes    -32,768 to 32,767  

**********/