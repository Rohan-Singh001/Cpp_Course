/*
**************************** DO NOT DELETE THIS *******************************************
 Note:-
   1 = achi tarah se basic clear karna 
   2 = fir Basic ke har topic ko OOPs ke har topic me implement karna hai!
*/


#include<iostream>

using namespace std;

// Templates in C++

template <class T>
class UT
{
    public:
       
       T * A;
       int S;

       UT(int m)
       {
         S = m;
         A = new T[S];
       }

       T dotProduct(UT &v)
       {
         T d = 0;
         
         for (int i = 0; i < S; i++)
         {
            d += this->A[i] * v.A[i];
         }

         return d;
         
       }
};

int main(){

    // Templates use

    UT <int> v1(3);
    v1.A[0] = 2;
    v1.A[1] = 1;
    v1.A[2] = 2;

    UT <int> v2(3);
    v2.A[0] = 2;
    v2.A[1] = 1;
    v2.A[2] = 4;

    int a = v1.dotProduct(v2);

    cout<<a<<endl;
    
    return 0;
}