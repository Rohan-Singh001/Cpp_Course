#include<iostream>

using namespace std;

class Employee
{
    int id;
    int salary;

  public:
    void setId(void)
    {
        salary = 122;
        cout<<"Enter the id of Employee "<<endl;
        cin>>id;
    }

    void getId(void)
    {
        cout<<"The id of this Employee is "<<id<<endl;
        // cout<<"The Salary is "<<salary<<endl;
    }
};

int main(){

    // Employee harry, rohan, lavish, lakshay;

    // harry.setId();
    // harry.getId();

    Employee fb[4];
    for(int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    
    return 0;
}