#include<iostream>
using namespace std;

//  Operator in C++

int main(){
    int a=4, b=5;
    cout<<"Operators in C++:"<<endl;
    cout<<"Following types of Operators in C++:"<<endl;

    //   1.  Arithmetic Operators

    /* cout<<"The value of a + b is "<<a+b<<endl;
       cout<<"The value of a - b is "<<a-b<<endl;
       cout<<"The value of a * b is "<<a*b<<endl;
       cout<<"The value of a / b is "<<a/b<<endl;
       cout<<"The value of a % b is "<<a%b<<endl;
       cout<<"The value of a++ is "<<a++<<endl;
       cout<<"The value of a-- is "<<a--<<endl;
       cout<<"The value of ++a is "<<++a<<endl;
       cout<<"The value of --a is "<<--a<<endl;
       cout<<endl;  */

       //2.   Assignment Operators  --->  used to assign values to variables

       //int a =3, b =9;
       //char d='d';

       //3.   Comparison operators

       /* cout<<"Following are the Comparison operators in C++"<<endl;
          cout<<"The value of a == b is "<<(a==b)<<endl; 
          cout<<"The value of a != b is "<<(a!=b)<<endl; 
          cout<<"The value of a >= b is "<<(a>=b)<<endl; 
          cout<<"The value of a <= b is "<<(a<=b)<<endl; 
          cout<<"The value of a > b is "<<(a>b)<<endl; 
          cout<<"The value of a < b is "<<(a<b)<<endl; 
       */

      //4.  Logical Operators

      cout<<"Following are the Logical operators in C++"<<endl;
      cout<<"The value of this logical and operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
      cout<<"The value of this logical or operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;
      cout<<"The value of this logical not operator (!(a==b)) is: "<<(!(a==b))<<endl;

    return 0;
}

    //  Header Files in C++

/* There are two types of header files:
1. System header files: It comes with the compiler
  Ex= #include<iostream>
  
2. User defined header files: It is written by the Programmer
 #include"this.h"  ----> This will produce an error if this.h is no present in the current directory*/
 