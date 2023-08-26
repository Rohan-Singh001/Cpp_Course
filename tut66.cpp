#include<iostream>

using namespace std;

template <class U1=int, class Y2=float, class A3=char>
class Harry
{
    public:
       
       U1 a;
       Y2 b;
       A3 c;

       Harry(U1 x, Y2 y, A3 z)
       {
           a = x;
           b = y;
           c = z;
       }

       void display()
       {
           cout<<"The value of a is "<<a<<endl;
           cout<<"The value of b is "<<b<<endl;
           cout<<"The value of c is "<<c<<endl;
       }
};

int main(){

    Harry<> h(4, 6.4, 'c');
    h.display();

    cout<<endl;

    // Harry<float, char, char> g('c', 'o', 'c');   // agar hum phele datatype ko float banakar bhi use char data de dete hai(matlab koi aur sa detatype banakar koi aur value pass karate hai )
                                                    // to hamara Program error throw nahi kare ga vo miss behave karega vo koi bhi number print kar dega
                                                    
    Harry<float, char, char> g(1.4, 'o', 'c');
    g.display();
    
    return 0;
}