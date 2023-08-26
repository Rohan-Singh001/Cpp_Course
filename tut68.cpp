#include<iostream>

using namespace std;

template <class T>
class Harry
{
    public:

       T data;

       Harry(T a)
       {
           data = a;
       }

       void display();

    //    Define this function out of class

    //    void display()
    //    {
    //       cout<<data;
    //    }
};

//  In template class => If we will define this function out of class then we will define like this 

template <class T>
void Harry<T>:: display()
       {
          cout<<data;
       }

//  Function

void func(int a)
{
    cout<<"I am first func() "<<a<<endl;
}

//  Template function overloading

template <class T>
void func(T a)
{
    cout<<"I am Templatised func() "<<a<<endl;
}

template <class T>
void func1(T a)
{
    cout<<"I am Templatised func1() "<<a<<endl;
}

int main(){

    // // Harry <float> h(5.7);
    // // Harry <char> h('C');
    // Harry <int> h(87);

    // cout<<h.data<<endl;
    // h.display();

    // func(4);   // Exact match takes the highest priority
    
    func1(4);   // Exact match takes the highest priority
    
    
    return 0;
}