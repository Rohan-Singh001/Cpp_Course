#include<iostream>

using namespace std;

/* Exchange two class private data value
   using Refrence variable in friend function
    */

class c2;

class c1
{
    int value1;
    friend void exchange(c1 &, c2 &);

    public:

      void indata(int a)
      {
        value1 = a;
      }

      void display(void)
      {
        cout<<value1<<endl;
      }
};

class c2
{
    int value2;
    friend void exchange(c1 &, c2 &);

    public:

      void indata(int a)
      {
        value2 = a;
      }

      void display(void)
      {
        cout<<value2<<endl;
      }
};

/* Trick to swap 2 numbers a and b:
   temp = a;
   a  =  b;
   b = temp;
   
   */

  void exchange(c1 &x, c2 &y)
  {
    int tmp = x.value1;
    x.value1 = y.value2;
    y.value2 = tmp;

  }

int main(){
    c1 oc1;
    c2 oc2;

    oc1.indata(34);
    oc2.indata(67);

    cout<<"The value of c1 before exchanging become: ";
    oc1.display();

    cout<<"The value of c2 before exchanging become: ";
    oc2.display();

    exchange(oc1, oc2);

    cout<<"The value of c1 after exchanging become: ";
    oc1.display();

    cout<<"The value of c2 after exchanging become: ";
    oc2.display();

    return 0;
}