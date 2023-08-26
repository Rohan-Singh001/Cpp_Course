#include<iostream>

using namespace std;

class Complex
{
    int real, imaginary;

    public:
       
       void getData() 
       {
         cout<<"The real part is "<<real<<endl;
         cout<<"The imaginary part is "<<imaginary<<endl;
       }

       void setData(int a, int b)
       {
         real = a;
         imaginary = b;
       }

};

int main(){
    // Complex c1;
    // Complex *ptr = &c1;

    Complex *ptr = new Complex;

    //  Arrow Operator

    // (*ptr).setData(1, 54);   // is exactly same as
    ptr->setData(1, 54);
    // (*ptr).getData();  // is as good as
    ptr->getData();

    // c1.setData(1, 54);
    // c1.getData();


    //  Array of Objects

    Complex *ptr1 = new Complex[4];

    ptr1->setData(1, 4);
    ptr1->getData();

    (ptr1 + 1)->setData(9, 84);
    (ptr1 + 1)->getData();
    
    return 0;
}

//****** This is Assignment From me to mine ********
// Change value of Object using pointer and Arrow Operator
// Some detailed Study From my side to Pointer, Arrow Operator and Change value of Operator


// #include<iostream>

// using namespace std;

// class Complex
// {
//     int real, imaginary;

//     public:
       
//        void getData()
//        {
//          cout<<"The real part is "<<real<<endl;
//          cout<<"The imaginary part is "<<imaginary<<endl;
//        }

//        void setData(int a, int b)
//        {
//          real = a;
//          imaginary = b;
//        }

// };

// int main(){

//   // Complex u1;          // In this arrow operator is not working
//   // u1->setData(4, 7);   // because this is work only Pointer 
//   // u1->getData();


//   // Pointer and Arrow Operator

//   // Complex *c1 = new Complex;

//   // c1->setData(1, 5);
//   // (*c1).getData();

//   // Change value of Object using Pointer and Arrow Operator

//   Complex c2;
//   Complex *k8 = &c2;

//   c2.setData(8, 7);
//   c2.getData();

//   k8->setData(9, 8);
//   k8->getData();

//   c2.getData();
  
//   return 0;
// }     