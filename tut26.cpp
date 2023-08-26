#include <iostream>

using namespace std;

// 1 + 4i
// 5 + 8i
// -------
// 6 + 12i

class Complex
{
    int a, b;

    // Below lines means that non member - sumComplex function is allowed to do anything with my private parts (members)
    // Hum is line ko public or private kisi me bhi declare kar sakte hai. Is se hamare ans me koi farak nahi pade ga!
    friend Complex sumComplex(Complex o1, Complex o2);

public:
    // friend Complex sumComplex(Complex o1, Complex o2);

    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2)
{
    // cout<<a;  // This is invalid because this is not the member of class Complex. This is friend function of class Complex.This is access only private members of class Complex!
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;

    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}

/* Properties of friend functions
 1. Not in the scope of class
 2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
 3. Can be invoked without the help of any object
 4. Usually contans the objects as arguments
 5. Can be declared inside public or private section of the class
 6. It cannot access the members directly by their names and need object_name.member_name to access any member.

 */

/* Create a function (Hint: Make it a friend function) which takes 2 point objects and computes the distance between those 2 points !

   Ex-

   1. Distance between (1, 1) and (1, 1) and Answer is (0)
   2. Distance between (0, 1) and (0, 6) and Answer is (5)
   3. Distance between (1, 0) and (70, 0) and Answer is (69)

       */

// #include<iostream>
// #include<math.h>

// using namespace std;

// class Point_Distance
// {
//    int x, y;

//    friend void Point_Value(Point_Distance m, Point_Distance n);

//    public:

//     void Set_Point(int o, int r)
//     {
//        x = o;
//        y = r;
//     }

// };

// void Point_Value(Point_Distance m, Point_Distance n)
// {
//     cout<<sqrt(((m.x - n.x)*(m.x - n.x)) + ((m.y - n.y)*(m.y - n.y)));
// }

// int main(){

//    Point_Distance k, p;
//    k.Set_Point(1, 1);

//    p.Set_Point(1, 1);

//    Point_Value(k, p);

//    return 0;
// }