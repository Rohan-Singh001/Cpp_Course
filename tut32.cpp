#include <iostream>

using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;

    public:

    Simple(int a, int b = 9, int c = 8)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void PrintData();

};

void Simple :: PrintData()
{
   cout<<"The value of data1, data2 and data3 is "<<data1<<", "<<data2<<" and "<<data3<<endl;
}

int main()
{
   // Simple s(1, 4);
    Simple s(12, 13, 14);
   // Simple s(1);

    s.PrintData();

    return 0;
}


//  H.W (Set default argument in tut31 type code !)


// #include <iostream>

// using namespace std;

// class Value
// {
//     int Num1;
//     int Num2;

// public:
//     Value(int a = 3, int b = 6)
//     {
//         Num1 = a;
//         Num2 = b;

//         cout << " This is code " << endl;
//     }

//     void PrintValue();
// };

// void Value ::PrintValue()
// {
//     cout << "This is the value of all two types of Num " << Num1 << " and " << Num2 << endl;
// }

// int main()
// {

//     Value R;
//     R.PrintValue();

//     Value h(8);
//     h.PrintValue();

//     Value i(9, 8);
//     i.PrintValue();

//     return 0;
// }
