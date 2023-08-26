#include<iostream>

using namespace std;

//   Classes

// class Employee
// {
//    private:
//        int a, b, c;
//    public:
//        int d, e;
//        void setdata(int a1, int b1, int c1);  // Declaration
//        void getdata(){                             // -------> |
//              cout<<"The value of a is "<<a<<endl;  // -------> |
//              cout<<"The value of b is "<<b<<endl;  // -------> |
//              cout<<"The value of c is "<<c<<endl;  // -------> |--> ise hum class ke bhar bhi define kar sakte hai. yaha per (void getdata();) ye likh kar!
//              cout<<"The value of d is "<<d<<endl;  // -------> |---> Aur bhar ye pura likhna hai. (void Employee :: getdata(){ aur cout likho })
//              cout<<"The value of e is "<<e<<endl;  // -------> |
//        }                                           // -------> |
// };

// void Employee :: setdata(int a1, int b1, int c1){
//     a = a1;
//     b = b1;
//     c = c1;
// }

// int main(){
//     Employee harry;
//     // harry.a = 134; ----> This will throw error as a is private
//     harry.d = 34;
//     harry.e = 89;
//     harry.setdata(1, 2, 4);
//     harry.getdata();
     
//      return 0;                   
// }

//  (H.W) = Think and Create a model

class Gaming
{
    private:
        int What_is_your_age;
        int How_many_years_you_play;
        int Your_level_in_game;

//    char How_many_years_you_play;
//    bool How_many_years_you_play;
    

    public:
        char First_character_name;
        bool Your_gaming_intrest;

    void gamedata(int y1, int p2, int a3);
    //    void gameo(int y1); ---|
    //    void gamejam(int p2);--|--> Hum private variable ko alag alag bhi bana sakta hai aur jaisa uper diya hai ek sath bhi.
    //    void kka(int a3);------|
    void outdata(){
        cout<<"How old are you in this year "<<What_is_your_age<<endl;
        cout<<"How many years you play this game "<<How_many_years_you_play<<endl;
        cout<<"What is your level now in this game "<<Your_level_in_game<<endl;
        cout<<"Your name first character "<<First_character_name<<endl;
        cout<<"Are you intrested in gaming "<<Your_gaming_intrest<<endl;
    }
    
};

void Gaming :: gamedata(int y1, int p2, int a3){                     //        _
   What_is_your_age = y1;                                           // y1 = y; |
   How_many_years_you_play = p2;                                    // p2 = p; |-----> Don't write like this. First the names of the variables created then the name of the 1 and 2 (p1, year2) this type of variable.
   Your_level_in_game = a3;                                         // a3 = a; |
} 
   //                        _______
// void Gaming :: gameo(int y1){    |
//  What_is_your_age = y1;          |
// }                                |
// void Gaming :: gamejam(int p2){  |
//     How_many_years_you_play = p2;|--->jab hum alag variable define karte hai to iss tarah alag he value dete hai.
// }                                |
// void Gaming :: kka(int a3){      |
//     Your_level_in_game = a3;     |
// }                                |                             
        //                    ------|     
int main(){
    Gaming Free_Fire;
    Free_Fire.First_character_name = 'R';
    Free_Fire.Your_gaming_intrest = true;
    Free_Fire.gamedata(20, 3, 63);
    // Free_Fire.gameo(20);---|
    // Free_Fire.gamejam(3);--|---->jab alag alag define karte hai to is tarah likhte hai. agar hum sabhi to ek jagah define karte hai to jab alag alag nahi likh sakte jaisa uper hai tab esa likhte hai.
    // Free_Fire.kka(63);-----|
    Free_Fire.outdata();

    return 0;
}