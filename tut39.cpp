#include<iostream>

using namespace std;

class Base
{
    protected:

       int a;
    
    private:
       
       int b;
};

class Derived : protected Base
{

};

/* 
   For a protected members:

                        |Public mode(derivation)|Private mode(derivation)|Protected mode(derivation)|
   1. Private members   |     Not Inherited     |     Not Inherited      |      Not Inherited       |
   2. Protected members |     Protected         |     Private            |      Protected           |
   3. Public members    |     Public            |     Private            |      Protected           |
   
   */

int main(){
   Base b;

   Derived d;

   // cout<<d.a;  // will not work since a is protected in both base as well as derived class !
    
    return 0;
}