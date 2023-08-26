#include<iostream>
#include<iomanip>

using namespace std;

int main(){
   // cout<<"Rohan Choudhary"<<endl;

   /* Loops in C++:
     There are three types of loops in C++:
      1.  For loop
      2.  While loop
      3.  do-While loop
      */
        
     // 1. For loop in C++

     // int i = 1;
     // cout<<i;
     // i++;

     // Syntax for For loop
     // for(initialization; condition; updation)
     // {
     //    loop body (C++ code);  
     // }

    //  for(int i = 0; i <= 40; i++)
    //  {
    //     cout<<i<<endl;
    //  }

    // Example of infinite For loop

    // for(int i = 0; 34 <= 40; i++)
    //   {
    //      cout<<i<<endl;
    //   }

    //  Using For loop print 6 table

    // int a = 6;

    //  for(int i = 0; i <= 10; i++)
    //  {
    //     // cout<<i * a<<endl;
    //     cout<<a<<" * "<<i<<" = "<<i * a<<endl;
    //     cout<<a<<" * "<<i<<" = "<<setw(3)<<i * a<<endl;
    //  }

    //  Using For loop print any table you want

/*   int a;
    cout<<"Enter the number you want to see the table: "<<endl;
    cin>>a;
     cout<<"This is a table of: "<<a<<endl;
     for(int i = 0; i <= 10; i++)
     {
        // cout<<i * a<<endl;
        cout<<a<<" * "<<i<<" = "<<i * a<<endl;
        // cout<<a<<" * "<<i<<" = "<<setw(3)<<i * a<<endl;

     }   */

//2.  While loop in C++

     /*  Syntax:
        while(condition)
        {
            C++ statements;
        }  */

        //  Printing 1 to 40 using while loop

        // int i = 1;
        // while(i<=40){
        //     cout<<i<<endl;
        //     i++;
        // }

        //  Example of infinite while loop

        // int i = 1;
        // while(true){
        //     cout<<i<<endl;
        //     i++;
        // }

     //  Print 6 table using while loop

   //   int a = 6;
   //   int i =1;
   //   while(i<=10)
   //   {  
   //      cout<<a<<" * "<<i<<" = "<<i * a<<endl;
   //      cout<<a<<" * "<<i<<" = "<<setw(3)<<i * a<<endl;
   //      cout<<i * a<<endl;
   //      i++;
   //   }

//  Using While loop print any table you want
     
   //   int i = 1;
   //   int a;
   //   cout<<"Enter the number you want to see the table: "<<endl;
   //   cin>>a;
   //   cout<<"This is table of "<<a<<endl;
   //   while (i<=10){
   //      cout<<a<<" * "<<i<<" = "<<i * a<<endl;
   //      cout<<a<<" * "<<i<<" = "<<setw(3)<<i * a<<endl;
   //      cout<<i *a<<endl;
   //      i++;
   //     }

    //3.  do-while loop

     //  Syntax:
     //  do
     //  {
     //    C++ statement;
     //  }while(condition);

      // int i = 1;
      // do{
      //    cout<<i<<endl;
      //    i++;
      // }while(i<=40);

      //  If condition is false then this loop print one number

      //  int i = 1;
      // do{
      //    cout<<i<<endl;
      //    i++;
      // }while(false);

       //  Print 6 table using do-while loop

      //  int i=1;
      //  int a = 6;
      //  do{
      //    cout<<a<<" * "<<i<<" = "<<i * a<<endl;
      //    cout<<a<<" * "<<i<<" = "<<setw(3)<<i * a<<endl;
      //    cout<<i * a<<endl;
      //    i++;
      //  }while(i<=10);

      //  Using do-While loop print any table you want
          
          int i = 1;
          int a;
          cout<<"Enter the number you want to see the table: "<<endl;
          cin>>a;
          cout<<"This is a table of: "<<a<<endl;
          do{
            cout<<a<<" * "<<i<<" = "<<i * a<<endl;
            cout<<a<<" * "<<i<<" = "<<setw(3)<<i * a<<endl;
            cout<<i * a<<endl;
            i++;
          }while(i<=10);

         return 0;
     }