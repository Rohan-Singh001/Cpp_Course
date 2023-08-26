#include<iostream>

using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:

       BankDeposit(){}
       BankDeposit(int p, int y, float r);    // r can be a value like 0.04
       BankDeposit(int p, int y, int r);    // r can be a value like 14
       void show();
};

BankDeposit :: BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;

    returnValue = principal;

    for(int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
}

BankDeposit :: BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r)/100;

    returnValue = principal;

    for(int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
}

void BankDeposit :: show()
{
     cout<<endl<<"Principal amount was "<<principal
        <<". Return value after "<<years
        <<" years is "<<returnValue<<endl;
}

int main(){
   BankDeposit bd1, bd2,  bd3;
    int p, y;
    float r;
    int R;

    bd3.show();

    cout<<"Enter the value of p, y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout<<"Enter the value of p, y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    return 0;
}

// This is second Example code of Dynamic Initialization of Objects Using Constructors

// #include<iostream>

// using namespace std;

// class BankDeposit
// {
//     int principal;
//     int years;
//     float interestRate;
//     float returnValue;

//     public:

//        //BankDeposit(){} // jab hum iss tarah ka constructor banate hai tab ek constructor ese blank banana padta hai varna code run nahi hota error ata hai!
//        BankDeposit(int p, int y, float r);    // r can be a value like 0.04
//        BankDeposit(int p, int y, int r);    // r can be a value like 14
//        void show();
// };

// BankDeposit :: BankDeposit(int p, int y, float r)
// {
//     principal = p;
//     years = y;
//     interestRate = r;

//     returnValue = principal;

//     for(int i = 0; i < y; i++)
//     {
//         returnValue = returnValue * (1+interestRate);
//     }
// }

// BankDeposit :: BankDeposit(int p, int y, int r)
// {
//     principal = p;
//     years = y;
//     interestRate = float(r)/100;

//     returnValue = principal;

//     for(int i = 0; i < y; i++)
//     {
//         returnValue = returnValue * (1+interestRate);
//     }
// }

// void BankDeposit :: show()
// {
//      cout<<endl<<"Principal amount was "<<principal
//         <<". Return value after "<<years
//         <<" years is "<<returnValue<<endl;
// }

// int main(){
//    // BankDeposit bd1, bd2,  bd3;    // agar hum iss line ko comment kar de tab iss code ko chalne ke liye hume (BankDeposit bd1 = ) iss tarah likhna pade ga jaise hum bd1 aur bd2 me kar rahe hai !
//     int p, y;
//     float r;
//     int R;

//     cout<<"Enter the value of p, y and r"<<endl;
//     cin>>p>>y>>r;
//     //bd1 = BankDeposit(p, y, r);
//      BankDeposit bd1 = BankDeposit(p, y, r);  //jab hum koi blank constructor nahi banate hai to iss tarah code ko run kar sakte hai!
//     bd1.show();

//     cout<<"Enter the value of p, y and R"<<endl;
//     cin>>p>>y>>R;
//     //bd2 = BankDeposit(p, y, R);
//      BankDeposit bd2 = BankDeposit(p, y, R);  //jab hum koi blank constructor nahi banate hai to iss tarah code ko run kar sakte hai!
//     bd2.show();

//     return 0;
// }


// This is H.W to me from my side


// #include<iostream>

// using namespace std;

// class BankMoney
// {
//     int YourMoney;
//     int year;
//     float ExtraMoney;
//     float ReturnMoney;

//     public:

//        BankMoney(){}
//        BankMoney(int Y, int y, float E);
//        BankMoney(int Y, int y, int E);

//        void Show_In_Display();

// };

// BankMoney :: BankMoney(int Y, int y, float E)
// {
//   YourMoney = Y;
//   year = y;
//   ExtraMoney = E;

//   ReturnMoney = YourMoney;

//   for(int i = 0; i < y; i++)
//   {
//     ReturnMoney = ReturnMoney * (1+ExtraMoney);
//   }
// }

// BankMoney :: BankMoney(int Y, int y, int E)
// {
//   YourMoney = Y;
//   year = y;
//   ExtraMoney = float(E)/100;

//   ReturnMoney = YourMoney;

//   for(int i = 0; i < y; i++)
//   {
//     ReturnMoney = ReturnMoney * (1+ExtraMoney);
//   }
// }

// void BankMoney :: Show_In_Display()
// {
//     cout<<" Your "<<YourMoney<<" Rs. in "<<year<<" Years = "<<ReturnMoney<<endl;;
// }

// int main(){

//     BankMoney bd1, bd2, bd3;

//     int a, b, c;
//     float d;

//     cout<<"Enter a, b, d"<<endl;
//     cin>>a>>b>>d;

//     bd1 = BankMoney(a, b, d);
//     bd1.Show_In_Display();

//     cout<<"Enter a, b, c"<<endl;
//     cin>>a>>b>>c;

//     bd2 = BankMoney(a, b, c);
//     bd2.Show_In_Display();
    
    
//     return 0;
// }