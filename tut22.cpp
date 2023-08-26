//  OOPs - Classes and Objects

//  C++ --->  initially called --> C with classes by stroustroup
//  class ---> extension of structures (in C)
//  structures had limitations
//       - members are public
//       - No methods
//  classes ---> structures + more
//  classes ---> can have methods and properties
//  classes ---> can make few members as private & few members public
//  structures in C++ are typedefed
//  you can declare objects along with the class declarion like this:
/*  class Employee{
          // Class definition
       } harry, rohan, lavish;  */
//  harry.salary = 8 makes no sense if salary is private

//  Nesting of member functions


#include <iostream>
#include <string>   //  ise hamare code me string add karne ke liye joda hai.

using namespace std;

class binary
{
// private:     // hum apne code me private likhe ya na likhe koi farak nahi padta kyuki class already private hoti hai. hame isme variable ko public karne ke liye public likhna padta hai.
      string s;
    //   void chk_bin(void); // hum ise private bhi kar sakte hai iss se code pe koi farak nahi padega. lakin is function ke private hone ke vagah se hum ise ese  use nahi kar payge jaisa line 86 me kiya hai.
public:
      void read(void);
      void chk_bin(void);
      void ones_compliment(void);
      void display(void);
};

void binary::read(void)
{
    cout << "Enter a binary number " << endl;
    cin >> s;
}

void binary::chk_bin(void)
{
   for (int i = 0; i < s.length(); i++)       // |
   {                                          // |  isme (.length and .at) string ke he function hai jo pure number ko sahi se check kare me maddat karte hai!
      if (s.at(i) != '0' && s.at(i) != '1')   // |
      {
        cout << "Incorrect binary format " << endl;
        exit(0);
      }
   } 
}

void binary::ones_compliment(void)
{
    // chk_bin();   // ise hum nesting of member function kahe ge kyu hum ise bina kisi ke madat ke bhi run kar sakte hai. jaisa line 86 me b. ke madat se ise print kiya hai us ke bina bhi ise print kar sakte hai.
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
           s.at(i) = '0'; 
        }
    }
}

void binary::display(void)
{
    cout<<"Displaying your binary number"<<endl;
    for(int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

int main(){

    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();
    
    return 0;
}

 //  My side home work for me.

// class Alpha
// {
//     string J;

//     public:
//     void cont(void);
//     void vov(void);
//     void play(void);
//     void dream(void);
// };

// void Alpha :: cont(void)
// {
//     cout<<"Given the number you check "<<endl;
//     cin>>J;
// }

// void Alpha :: vov(void)
// {
//     for( int i = 0; i < J.length(); i++)
//     {
//        if(/*J.at(i) != '5' && J.at(i) != '8'*/ J.at(i) == '0')
//        {
//         cout<<"This number is not Roll no. "<<endl;
//         exit(0);
//        }
//     }
// }

// void Alpha :: play(void)
// {
//     for( int i = 0; i < J.length(); i++)
//     {
//         if(/*J.at(i) == '5'*/ J.at(i) >= '1' && J.at(i) <= '5')
//         {
//             // J.at(i) = '8';
//             cout<<"Hi"<<endl;
//         }
//         else if(J.at(i) >= '6' && J.at(i) < '9')
//         {
//             // J.at(i) = '5';  
//             cout<<"bye"<<endl;  
//         }
//         else
//         {
//             cout<<"hhhhh"<<endl;
//         }
//     }
// }

// void Alpha :: dream(void)
// {
//     cout<<"Display your Roll no. Roll no is Hidden with these numbers. "<<endl;
//     for( int i = 0; i < J.length(); i++)
//     {
//     cout<<J.at(i);
//     }
//     cout<<endl;
// }

// int main(){
//     Alpha C;
//     C.cont();
//     C.vov();
//     C.dream();
//     C.play();
//     C.dream();

//     return 0;
// }