#include<iostream>
#include<fstream>

using namespace std;

// In this tutorial I am using Constructor (first way) to open a file

int main(){

    // Connecting our file with hout stream
    ofstream hout("sample60.txt");

    // Creating a name string and filling it with the string entered by the user
    string name;
    cout<<"Enter your name "<<endl;
    cin>>name;

    // Writing a string to the files
    hout<<"My name is " + name;

    hout.close();  // This is use to close our file

    ifstream hin("sample60.txt");
    string content;
    // hin>>content;
    getline(hin, content);

    cout<<"The content of this file is: "<<content<<endl;
    hin.close();  // This is use to close our file

    return 0;
}