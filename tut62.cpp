#include<iostream>
#include<fstream>
#include<string>

using namespace std;

// In this tutorial I am using member function (second way) to open a file {open()}

int main(){

    ofstream out;

    out.open("sample60.txt");

    out<<"This is me\n";
    out<<"This is me also\n";
    out<<"This is also me\n";
    out<<"This is alsi me\n";
    out<<"Rohan Choudhary\n";
    out<<"Jaat on top\n";
    out.close();

    ifstream in;
    string st, st2;
    in.open("sample60.txt");

    // in>>st>>st2;

    // Read Operator => eof is use to copy sample60.txt text to (in) object of ifstream !

    while(in.eof() == 0)
    {
        getline(in, st);
        cout<<st<<endl;
    }

    cout<<st<<st2<<endl;

    in.close();
    
    return 0;
}