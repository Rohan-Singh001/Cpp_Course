#include<iostream>

using namespace std;

class BaseClass
{
    public:

       int var_base = 1;

       virtual void display()
       {
         cout<<"1 Displaying Base class variable var_base "<<var_base<<endl;
       }

};

class DerivedClass : public BaseClass
{
     public:

       int var_derived = 2;

       void display()
       {
         cout<<"2 Displaying Base class variable var_base "<<var_base<<endl;
         cout<<"2 Displaying Derived class variable var_derived "<<var_derived<<endl;
       }
};

int main(){

    BaseClass * base_class_pointer;

    BaseClass obj_base;

    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;

    base_class_pointer->display();

    
    return 0;
}




//*******************(H.w) = My side to me *******************************


// #include<iostream>

// using namespace std;

// class BBB1
// { 
//    public:

//       int var1;
      
//       void set_var1(int v)
//       {
//           var1 = v;
//           cout<<"set var 1"<<endl;
//       }

//       virtual void show1()
//       {
//          cout<<"The value of var 1 is "<<var1<<endl;
//       }
// };

// class BBB2
// {   
//       public:
      
//       int var2;

//       void set_var2(int v2)
//       {
//           var2 = v2;
//           cout<<"set var 2"<<endl;
//       }

//       void show2()
//       {
//          cout<<"The value of var 2 is "<<var2<<endl;
//       }
// };

// class DDD : public BBB1, public BBB2
// {
//  public:
//     int var_derived;

//     void set_var_d(int);

//     void show1();
   
// };

// void DDD :: set_var_d(int y)
// {
//    var_derived = y;
//    var2 = 9;
// }

// void DDD :: show1()
// {
//    cout<<"(1) The value of var 1 is "<<var1<<endl;
//    cout<<"(2) The value of var 2 is "<<var2<<endl;
//    cout<<"(3) The value of var derived "<<var_derived<<endl;
// }


// int main(){

//   BBB1 * uu;

//   BBB1 obj_BBB1;
  

//   BBB2 obj_BBB2;

//   obj_BBB2.set_var2(4);
//   obj_BBB2.show2();



//   DDD obj_ddd;

//   obj_ddd.set_var_d(5);

//   uu = &obj_ddd;

//   uu->set_var1(7);

//   uu->show1();
      
//   return 0;
// }
