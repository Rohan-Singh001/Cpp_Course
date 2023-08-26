#include<iostream>

using namespace std;

int main(){
     // cout<<"Hi Rohan "<<endl;

     //   Arrays  Example

     // Ex. no.1=

     int mathMarks[4];
     mathMarks[0] = 2278;
     mathMarks[1] = 738;
     mathMarks[2] = 378;
     mathMarks[3] = 578;

     cout<<"These are Math marks: "<<endl;

     cout<<mathMarks[0]<<endl;
     cout<<mathMarks[1]<<endl;
     cout<<mathMarks[2]<<endl;
     cout<<mathMarks[3]<<endl;

     // Ex. no.2=

     int marks[] = {23, 45, 56, 89};

     cout<<"These are marks: "<<endl;

     // You can change the value of an array
     marks[2] = 455;

    //  cout<<marks[0]<<endl;
    //  cout<<marks[1]<<endl;
    //  cout<<marks[2]<<endl;
    //  cout<<marks[3]<<endl;

    // Print marks using for loop

    for(int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }

    //  H.W

    // Quick quiz: do the same using while and do-while loops?
    
    // Print marks using while loop

    // int i = 0;

    // while(i < 4)
    // {
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }

     // Print marks using do-while loop
     
    //  int i = 0;

    //  do{
    //     cout<<"Yhe value of marks "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    //  }while(i < 4);

    //  Pointers and arrays

    int* p = marks;

    cout<<*(p++)<<endl;
    // cout<<*p<<endl;
    cout<<*(++p)<<endl;
    // cout<<"The value of *p is "<<*p<<endl;
    // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

    //  Pointer Arithmatic
    //  Address(New) = Address(Current) + i * Size of data type
    
    return 0;
}