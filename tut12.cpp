#include<iostream>

using namespace std;

int main(){
    //  What is a pointer? ----> data type which holds the address of other data types

      int a = 3;
     //              __
      int* b = &a; //  |
                   //  |
      // int* b;   //  | ----> Both are correct!
      // b = &a;   //  |
      //             --|

     //  &  ----->  (Address of) Operator

      cout<<"The address of a is "<<&a<<endl;
      cout<<"The address of a is "<<b<<endl;

     // *  ----->  (value at) Dereference Operator

      cout<<"The value at b is "<<*b<<endl;

      //  Pointer to Pointer

      int** c = &b;
      cout<<"The address of b is "<<&b<<endl;
      cout<<"The address of b is "<<c<<endl;
      cout<<"The value at address c is "<<*c<<endl;
      cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;
      

     return 0;

  }