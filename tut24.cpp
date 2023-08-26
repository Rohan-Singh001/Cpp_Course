#include <iostream>

using namespace std;

//  Static variable ka life time jab tak hota hai jab tak pura programm terminate nahi ho jata(Jab tak pura programm chalta hai)

class Employee
{
    int id;
    static int count; // Static variable default value is 0

public:
    void setdata(void)
    {
        cout << "Enter the Employee Id " << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The Id of this employee is " << id << " and this is employee number " << count << endl;
    }
    static void getcount(void)
    {
        // cout<<id<<endl;  // This is throws an error because id is not a static member
        cout << "The value of count is " << count << endl;
    }
} harry, rohan, lavish, lakshay;

// Count is the static data member of class Employee
int Employee ::count; // = 1000; agar hame static variable ko koi value dene hai to class ke bhar ese de sakte hai jaise 1000 likha hai.

int main()
{
    // Employee harry, rohan, lavish;

    // harry.id = 1;    //  |
    // harry.count = 1;  // |  cannot do this because id and count are private

    harry.setdata();
    harry.getdata();
    Employee::getcount();

    rohan.setdata();
    rohan.getdata();
    Employee::getcount();

    lavish.setdata();
    lavish.getdata();
    Employee::getcount();

    lakshay.setdata();
    lakshay.getdata();
    Employee::getcount();

    return 0;
}

// This is Homework to me with my side

// #include <iostream>

// using namespace std;

// class Result
// {
//    int Roll_no;
//    static int Enroll;
//    static int Roll_paper;

// public:
//    void Getroll(void);
//    void PrintEnroll(void);
//    static void seten(void);
// } Rohan, Avni, Lakshay;

// void Result ::Getroll(void)
// {
//    cout << "\nWhat is your Roll no. " << endl;
//    cin >> Roll_no;
//    cout << "\n"<< endl;
//    Enroll++;
// }

// void Result ::PrintEnroll(void)
// {
//    cout << "This is your Roll no = " << Roll_no << endl;
//    cout << "This is your Enrollment no = " << Enroll << endl;
// }

// void Result ::seten(void)
// {
//    Roll_paper++;
//    cout << "This is your Paper Roll no." << Roll_paper << endl;
// }

// int Result ::Enroll = 1000;

// int Result ::Roll_paper = 8765;

// int main()
// {

//    Rohan.Getroll();
//    Rohan.PrintEnroll();
//    Result::seten();

//    Avni.Getroll();
//    Avni.PrintEnroll();
//    Result::seten();

//    Lakshay.Getroll();
//    Lakshay.PrintEnroll();
//    Result::seten();

//    return 0;
// }