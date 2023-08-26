#include<iostream>

using namespace std;

// Base Class
class Employee
{
    
    public:

       int id;
       float salary;
       
       Employee(int inpId)
       {
        id = inpId;
        salary = 34.0;
       }

       Employee()
       {}
};

// Derived Class Syntax

/*  
  class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
  {
    class members/methods/etc...
  }

  Note:-
  (1)- Default visibility mode is private
  (2)- Public Visibility Mode => Public members of the base class becomes Public members of the derived class
  (2)- Private Visibility Mode => Public members of the base class becomes Private members of the derived class
  (4)- Private members are never inherited
*/

// Creating a Programmer derived class from Employee Base class

class Programmer : Employee    // public Employee
{
  public:

  int languageCode;

  Programmer(int inpid)
  { 
    id = inpid;
    languageCode = 9;
  }
  
  void getData()
  {
    cout<<id<<endl;
  }

};

int main(){
    Employee harry(1), rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;

    Programmer skillf(10);

    cout<<skillf.languageCode<<endl;
    skillf.getData();
    // cout<<skillf.id<<endl;    // if derived class visibility mode is public then print this because visibility mode is public then all member of derived class is public ! 

    return 0;
}