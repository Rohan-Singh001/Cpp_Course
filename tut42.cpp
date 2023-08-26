#include<iostream>
#include<cmath>

using namespace std;

/* 
Create 2 classes:
   1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs (+, -, *, /) and displays the results using another function.
   
   2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operation of your choice and displays the results using another function.
   
   Create another class HybridCalculator and inherit it using these 2 classes:
   Q1. What type of Inheritance are you using? --> Multiple Inheritance
   Q2. Which mode of Inheritance are you using? -->  private SimpleCalculator, private ScientificCalculator
   Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
   Q4. How is code reusability implemented?
*/

class SimpleCalculator
{
    float a;
    float b;

    public:
       
       void set_number(float , float);

};

void SimpleCalculator :: set_number(float c, float d)
{
  a = c;
  b = d;

  int r;
  
  cout<<"\nWhich type of Simple Calculator mode you use!"<<endl;
  cout<<" 1 = Addition\n 2 = Subtract\n 3 = Multiple\n 4 = Divide\n"<<endl;
  cin>>r;
  cout<<endl;

  if(r == 1)
  {
    cout<<a<<" + "<<b<<" = "<<(a+b)<<endl;
  }
  else if(r == 2)
  {
    cout<<a<<" - "<<b<<" = "<<(a-b)<<endl;
  }
  else if(r == 3)
  {
    cout<<a<<" * "<<b<<" = "<<(a*b)<<endl;
  }
  else if(r == 4)
  {
    cout<<a<<" / "<<b<<" = "<<(a/b)<<endl;
  }
  else
  {
    cout<<"This mode is not avilable on our calculator! \n Sorry!"<<endl;
  }

}

class ScientificCalculator
{
    float t;
    float y;

    public:
       
       void set_Sci(float);
};

void ScientificCalculator :: set_Sci(float e)
{
    t = e;

    int p;
    cout<<"\nWhich type of Scientific claculator mode you use!"<<endl;
    cout<<" 1 = Square\n 2 = Cube\n 3 = Power of\n 4 = Sin\n 5 = Cos\n 6 = Tan\n"<<endl;
    cin>>p;
    cout<<endl;

    if(p == 1)
    {
        cout<<"Square of "<<t<<" is = "<<(pow(t, 2))<<endl;
    }
    else if(p == 2)
    {
        cout<<"Cube of "<<t<<" is = "<<(pow(t, 3))<<endl;
    }
    else if(p == 3)
    {
        int h;
        cout<<"Enter the Power of"<<endl;
        cin>>h;
        cout<<t<<" power "<<h<<" is = "<<(pow(t, h))<<endl;
    }
    else if(p == 4)
    {
       cout<<"The vlaue of Sin("<<t<<") is = "<<sin(t)<<endl;
    }
    else if(p == 5)
    {
       cout<<"The vlaue of cos("<<t<<") is = "<<cos(t)<<endl;
    }
    else if(p == 6)
    {
        cout<<"The vlaue of tan("<<t<<") is = "<<tan(t)<<endl;
    }
    else
    {
        cout<<"This mode is not avilable on our calculator! \n Sorry!"<<endl;
    }
   
}

class HybridCalculator : private SimpleCalculator, private ScientificCalculator
{

    public:

    void Set_Class(void);
};

void HybridCalculator ::Set_Class(void)
{
    int z;

    cout<<"Which type of Calculator you use!"<<endl;
    cout<<" 1 - Simple Calculator!\n 2 - Scientific Calculator! \n"<<endl;
    cin>>z;

    if(z == 1)
    {
        float p;
        float q;

        cout<<"\nThis is Simple Calculator!"<<endl;
        cout<<"Enter Both two values!\nEnter First value!\n"<<endl;
        cin>>p;
        cout<<"Enter Second value!\n"<<endl;
        cin>>q;
        set_number(p, q);
    }
    else if(z == 2)
    {
        float k;

        cout<<"\nThis is Scientific Calculator!"<<endl;
        cout<<"Enter a value related to (Square, Cube, Power of, Sin, Cos, Tan)!\n"<<endl;
        cin>>k;

        set_Sci(k);
    }
    else
    {
       cout<<"This mode is not avilable on our calculator! \n Sorry!"<<endl;
    }
}
int main(){

    

    HybridCalculator O; 

    O.Set_Class();

    cout<<"Thankyou for using Rohan Choudhary Calculator!"<<endl;
        
    return 0;
}

//***************Exercise 1.1 In this i am using public mode ******************************

// #include<iostream>
// #include<cmath>

// using namespace std;

// class SimpleCalculator
// {
//     float a;
//     float b;

//     public:
       
//        void set_number(float , float);

// };

// void SimpleCalculator :: set_number(float c, float d)
// {
//   a = c;
//   b = d;

//   int r;
  
//   cout<<"\nWhich type of Simple Calculator mode you use!"<<endl;
//   cout<<" 1 = Addition\n 2 = Substract\n 3 = Multiple\n 4 = Divide\n"<<endl;
//   cin>>r;
//   cout<<endl;

//   if(r == 1)
//   {
//     cout<<a<<" + "<<b<<" = "<<(a+b)<<endl;
//   }
//   else if(r == 2)
//   {
//     cout<<a<<" - "<<b<<" = "<<(a-b)<<endl;
//   }
//   else if(r == 3)
//   {
//     cout<<a<<" * "<<b<<" = "<<(a*b)<<endl;
//   }
//   else if(r == 4)
//   {
//     cout<<a<<" / "<<b<<" = "<<(a/b)<<endl;
//   }
//   else
//   {
//     cout<<"This mode is not avilable on our calculator! \n Sorry!"<<endl;
//   }

// }

// class ScientificCalculator
// {
//     float t;
//     float y;

//     public:
       
//        void set_Sci(float);
// };

// void ScientificCalculator :: set_Sci(float e)
// {
//     t = e;

//     int p;
//     cout<<"\nWhich type of Scientific claculator mode you use!"<<endl;
//     cout<<" 1 = Square\n 2 = Cube\n 3 = Power of\n 4 = Sin\n 5 = Cos\n 6 = Tan\n"<<endl;
//     cin>>p;
//     cout<<endl;

//     if(p == 1)
//     {
//         cout<<"Square of "<<t<<" is = "<<(pow(t, 2))<<endl;
//     }
//     else if(p == 2)
//     {
//         cout<<"Cube of "<<t<<" is = "<<(pow(t, 3))<<endl;
//     }
//     else if(p == 3)
//     {
//         int h;
//         cout<<"Enter the Power of"<<endl;
//         cin>>h;
//         cout<<t<<" power "<<h<<" is = "<<(pow(t, h))<<endl;
//     }
//     else if(p == 4)
//     {
//        cout<<"The vlaue of Sin("<<t<<") is = "<<sin(t)<<endl;
//     }
//     else if(p == 5)
//     {
//        cout<<"The vlaue of cos("<<t<<") is = "<<cos(t)<<endl;
//     }
//     else if(p == 6)
//     {
//         cout<<"The vlaue of tan("<<t<<") is = "<<tan(t)<<endl;
//     }
//     else
//     {
//         cout<<"This mode is not avilable on our calculator! \n Sorry!"<<endl;
//     }
   
// }

// class HybridCalculator : public SimpleCalculator, public ScientificCalculator
// {

//     public:

//     void Set_Class(void);
// };

// void HybridCalculator ::Set_Class(void)
// {
//     int z;

//     cout<<"Which type of Calculator you use!"<<endl;
//     cout<<" 1 - Simple Calculator!\n 2 - Scientific Calculator! \n"<<endl;
//     cin>>z;

//     if(z == 1)
//     {
//         float p;
//         float q;

//         cout<<"\nThis is Simple Calculator!"<<endl;
//         cout<<"Enter Both two values!\nEnter First value!\n"<<endl;
//         cin>>p;
//         cout<<"Enter Second value!\n"<<endl;
//         cin>>q;
//         set_number(p, q);
//     }
//     else if(z == 2)
//     {
//         float k;

//         cout<<"\nThis is Scientific Calculator!"<<endl;
//         cout<<"Enter a value related to (Square, Cube, Power of, Sin, Cos, Tan)!\n"<<endl;
//         cin>>k;

//         set_Sci(k);
//     }
//     else
//     {
//        cout<<"This mode is not avilable on our calculator! \n Sorry!"<<endl;
//     }
// }
// int main(){

    

//     HybridCalculator O; 

//     O.Set_Class();

//     cout<<"Thankyou for using Rohan Choudhary Calculator!"<<endl;
        
//     return 0;
// }

// ****************Exercise 2:*****************************



// #include<iostream>
// #include<cmath>

// using namespace std;

// class SimpleCalculator
// {
//     float a;
//     float b;

//     public:
       
//        void set_number(float , float);

// };

// void SimpleCalculator :: set_number(float c, float d)
// {
//   a = c;
//   b = d;

//   char r;
  
//   cout<<"\nWhich type of Simple Calculator mode you use!"<<endl;
//   cout<<" 1. For Addition Enter (+):\n 2. For Substract Enter (-):\n 3. For Multiple Enter (*):\n 4. For Divide Enter (/):\n 5. Enter (0) to exit Calculator: "<<endl;
//   cin>>r;
//   cout<<endl;

//   switch(r)
//   {
//   case '+':
//     cout<<a<<" + "<<b<<" = "<<(a+b)<<"\n"<<endl;
//     break;

//   case '-':
//     cout<<a<<" - "<<b<<" = "<<(a-b)<<"\n"<<endl;
//     break;
  
//   case '*':
//     cout<<a<<" * "<<b<<" = "<<(a*b)<<"\n"<<endl;
//     break;

//   case '/':
//     cout<<a<<" / "<<b<<" = "<<(a/b)<<"\n"<<endl;
//     break;

//   case '0':
//     break;

//   default:
//   cout<<"This type of mode is not avilable on our calculator! \n Sorry!\n"<<endl;
//   break;

//   }

// }

// class ScientificCalculator
// {
//     float t;
//     float y;

//     public:
       
//        void set_Sci(float);
// };

// void ScientificCalculator :: set_Sci(float e)
// {
//     t = e;

//     int p;
//     cout<<"\nWhich type of Scientific claculator mode you use!"<<endl;
//     cout<<" 1. Enter (1) for Square\n 2. Enter(2) for Cube\n 3. Enter (3) for Power of\n 4. Enter (4) for Sin\n 5. Enter (5) for Cos\n 6. Enter (6) for Tan\n 7. Enter (7) for exit: \n"<<endl;
//     cin>>p;
//     cout<<endl;

//     switch(p)
//     {
//       case 1:
//         cout<<"Square of "<<t<<" is = "<<(pow(t, 2))<<endl;
//         break;

//     case 2:
//         cout<<"Cube of "<<t<<" is = "<<(pow(t, 3))<<endl;
//         break;

//     case 3:
//         int h;
//         cout<<"Enter the Power of"<<endl;
//         cin>>h;
//         cout<<t<<" power "<<h<<" is = "<<(pow(t, h))<<endl;
//         break;

//     case 4:
//        cout<<"The vlaue of Sin("<<t<<") is = "<<sin(t)<<endl;
//        break;

//     case 5:
//        cout<<"The vlaue of cos("<<t<<") is = "<<cos(t)<<endl;
//        break;

//     case 6:
//        cout<<"The vlaue of tan("<<t<<") is = "<<tan(t)<<endl;
//        break;

//     case 7:
//        break;

//     default:
//        cout<<"This mode is not avilable on our calculator! \n Sorry!"<<endl;
//        break;

//     }
   
// }

// class HybridCalculator : private SimpleCalculator, private ScientificCalculator
// {

//     public:

//     void Set_Class(void);
// };

// void HybridCalculator ::Set_Class(void)
// {
//     int z;

//     cout<<"Which type of Calculator you use!"<<endl;
//     cout<<" 1. Enter (1) for Simple Calculator!\n 2. Enter (2) for Scientific Calculator! \n 3. Enter (3) for exit Calculators "<<endl;
//     cin>>z;

//     if(z == 1)
//     {
//         float p;
//         float q;

//         cout<<"\nThis is Simple Calculator!"<<endl;
//         cout<<"Enter Both two values!\nEnter First value!\n"<<endl;
//         cin>>p;
//         cout<<"Enter Second value!\n"<<endl;
//         cin>>q;
//         set_number(p, q);
//     }
//     else if(z == 2)
//     {
//         float k;

//         cout<<"\nThis is Scientific Calculator!"<<endl;
//         cout<<"Enter a value related to (Square, Cube, Power of, Sin, Cos, Tan)!\n"<<endl;
//         cin>>k;

//         set_Sci(k);
//     }
//     else if(z == 3)
//     {
//       exit;
//     }
//     else
//     {
//        cout<<"This mode is not avilable on our calculator! \n Sorry!"<<endl;
//     }
// }
// int main(){

//     HybridCalculator O; 

//     O.Set_Class();

//     cout<<"Thankyou for using Rohan Choudhary Calculator!"<<endl;
        
//     return 0;
// }