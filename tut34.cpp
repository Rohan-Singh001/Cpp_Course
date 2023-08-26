#include<iostream>

using namespace std;

class Number
{
    int a;

    public:

    Number()
    {
        a = 0;
    }

    Number(int num)
    {
        a = num;
    }

    //  When no copy constructor is found, compiler supplies its own copy constructor

    Number(Number &obj)
    {
        cout<<"Copy constructor called!!!"<<endl;
        a = obj.a;
    }

    void display()
    {
        cout<<"The number of this object is "<<a<<endl;
    }
};

int main(){
    Number x, y, z(45), z2;

    x.display();

    y.display();

    z.display();

    //  z1 should exactly resemble z or x or y

    Number z1(x);   //  Copy constructor invoked
    z1.display();

    Number z4(z);  //  Agar hum koi copy constructor nahi banaye aur iss tarah likhe to compiler khud ka copy construstor run karega !
    z4.display();

    //  Jab hamara object phele se he bana hwa hoga tab copy constructor invoked nahi hoga !

    z2 = z;   //  Copy constructor not called
    z2.display();

    //  Jab hamara object baan raha hoga tab hamara copy constructor invoked hoga !

    Number z3 = z;   //  Copy constructor invoked
    z3.display();
    
    return 0;
}


// This is code of (How to set default value in Constructor)!

// #include<iostream>

// using namespace std;

// class Number
// {
//     int a;

//     public:

//     Number()
//     {
//         a = 0;
//     }
//     Number(int num)
//     {
//         a = num;
//     }

//     void display()
//     {
//         cout<<"The number of this object is "<<a<<endl;
//     }
// };

// int main(){
//     Number x, y, z(45);

//     x.display();

//     y.display();

//     z.display();
    
//     return 0;
// }