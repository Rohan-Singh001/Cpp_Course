#include<iostream>

using namespace std;

//   Struct

// First type of struct

// struct employee
// {
//     int eId;
//     char favChar;
//     float salary;
// };

// Second type of struct


/* typedef struct employee
{
    int eId;
    char favChar;
    float salary;
} ep; */

//  int main(){
    // using first type struct

  //  struct employee rohan;

    // using Second type struct
    /*This makes it easier for us to write.
      Instead of full name we can write ep.*/

 /*   ep harry;
    ep Aditya;

    rohan.eId = 4;
    rohan.favChar = 'R';
    rohan.salary = 120000000;

    cout<<"The value is "<<rohan.eId<<endl;
    cout<<"The value is "<<rohan.favChar<<endl;
    cout<<"The value is "<<rohan.salary<<endl;
    return 0;
}  */

//      Union

// union money
// {
//   int rice;
//   char cars;
//   float pounds;
// };

// int main(){

//   union money m1;
//   m1.cars = 'c';
//   cout<<m1.cars<<endl;

//     return 0;
// }

//    Enum

int main(){
   enum Meal{ breakfast, lunch, dinner};
   Meal m1 = lunch;
   cout<<m1<<endl;
   cout<<(m1==1)<<endl;
   cout<<(m1==2)<<endl;
  //  cout<<breakfast<<endl;
  //  cout<<lunch<<endl;
  //  cout<<dinner<<endl;

  return 0;
}
