#include <iostream>

using namespace std;

//  First function

// float funcAverage(int a, int b)
// {
//     float avg = (a + b)/2.0;
//     return avg;
// }

//  Second function

// float funcAverage2(int a, float b)
// {
//     float avg = (a + b)/2.0;
//     return avg;
// }

// How to Swap numbers using template in C++

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

// Third Function Templates

template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;

    // int x = 5, y = 7;
    // swap(x, y);
    // cout<<x<<endl<<y;

    return avg;
}

int main()
{

    float a;

    //  First function
    // a = funcAverage(5, 2.0);

    //  Second function
    // a = funcAverage2(5, 2.4);

    //  Third function template
    a = funcAverage(5, 2);

    // // Hum C++ me iss tarah se bhi use kar sakte hai
    // printf("The average of these numbers is %.3f",a);   // Isme %.3f ka matlab hai ki point(.) ke bad ke 3 number tak print karo !

    cout << "The average of these numbers is " << a << endl;

    // Swap number

    int x = 5, y = 7;
    swapp(x, y);
    cout << x << endl
         << y;

    return 0;
}