#include<iostream>

using namespace std;

/*
 Syntax for initialization list in constructor:
 constructor (argument-list) : initialization-section
 {
    assignment + other code;
 }

 class Test
 {
    int a;
    int b;

    public:

       Test(int i, int j) : a(i), b(j)
       {
        constructor-body
       }
 };
 */

class Test
 {
    int a;
    int b;

    public:

    //    Test(int i, int j) : a(i), b(j)      //-->| These four are initialization list
    //    Test(int i, int j) : a(i), b(i + j)  //-->| hum iss tarah se constructor me value declare kara sakte hai
    //    Test(int i, int j) : a(i), b(2 * j)  //-->|
    //    Test(int i, int j) : a(i), b(a + j)  //-->|

    //    Test(int i, int j) : b(j), a(i + b)  --> RED Flag this will create problems because a will be initialized first
    //    If we are initialized upper line then hame class me b ko upper aur a ko niche declare karna padega jisse upper wali line sahi se run hoge constructor ke rule ke anusar phele vo run hoga jo phele declare hoga isiliye upper wali line ke liye b ko phele declare karna padega!

       Test(int i, int j) : a(i)  // This is also a part of initialization list
       {
        b = j;
        cout<<"Constructor executed: "<<endl;
        cout<<"Value of a is "<<a<<endl;
        cout<<"Value of b is "<<b<<endl;
       }
 };

int main(){ 

    Test t(4, 6);
    
    return 0;
}