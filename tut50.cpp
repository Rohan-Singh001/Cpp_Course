#include<iostream>

using namespace std;

int main(){
    //  Basic Example of Pointer

    int a = 4;
    int* ptr = &a;
    *ptr = 999;   // is line me humne address ke jariye a ki value change ki hai!

    cout<<"The value of a is "<<*(ptr)<<endl;

    // New Operator

    // int *p = new int(40);
    float *p = new float(40.78);

    cout<<"The value at address p is "<<*(p)<<endl;

    int *arr = new int[3]; 

    arr[0] = 10;          // arr[0] = 10;    //
    *(arr + 1) = 20;      // arr[1] = 20;    //--> Hum inhe dono tarah se likh sakte hai
    arr[2] = 30;          // arr[2] = 30;    //

    // delete operator

    // delete arr;    // Hum in dono ko kisi bhi tarah likh sakte hai
    delete[] arr;     // Ye kisi bhi dinamically allocated int, float and dinamically allocated block of memory ko delete karne ke kam ata hai!

    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;


    return 0;
}