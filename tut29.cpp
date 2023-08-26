#include<iostream>

using namespace std;

class Complex
{
     int a, b;

     public:

    //    Creating a constructor
    //    Constructor is a special member function with same name as of the class.
    //    It is automatically invoked(call karna ya execute karna) whenever an object is created.
    //    It is use to initialize the objects of its class.

    Complex(void);     //  Constructor declaration

    void printNumber()
    {
       cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;
     //   cout<<"Number a is "<<a<<" and number b is "<<b<<endl;
    }
};

Complex :: Complex(void)  // ----> This is a default Constructor as it accept no parameters !
{
    a = 0;
    b = 0;
    // cout<<"Hello World"<<endl;
}

int main(){
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}


/*  Characteristics of Constructors

 1.  It should be declared in the public section in the class
 2.  They are automatically invoked whenever the object is created
 3.  They cannot return values and do not have return types
 4.  It can have default arguments
 5.  We cannot refer to their address
 
   */