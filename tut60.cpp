#include<iostream>
#include<fstream>

/*
 The useful classes for working with files in C++ are:
 1. fstreambase
 2. ifstream  --> derived from fstreambase
 3. ofstream  --> derived from fstreambase
*/

// In order work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
// 1. using the constructor 
// 2. using the member function open() of the class


using namespace std;

int main(){
    string st = "Harry bhai";
    string st2;

    // Opening files using constructor and writing it
    
    // ofstream out("sample60.txt");  // Write Operation
    // out<<st;
    
    // Opening files using constructor and reading it

    ifstream in("sample60b.txt");  // Read Operation
    // in>>st2;  //  yee hamari file ke content ko pura copy nahi kar pata kyuki ye space aur special character ko nahi read karta aur use vahi chod deta hai 
    getline(in, st2); // yee hamari file ke ek line he copy kar sakta hai dusri copy karane ke liye hame ise dubara ese he likhna hoga lekin fir first line nahi copy hoge ek bar me ek he hogi
    // getline(in, st2);

    cout<<st2;
    
    return 0;
}