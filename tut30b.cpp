// #include<iostream>

// using namespace std;

// class Point
// {
//    int x, y;

//  public:
   
//    Point(int a, int b)
//    {
//      x = a;
//      y = b;
//    }

//    void displayPoint()
//    {
//      cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
//    }

// };

// int main(){
//     Point p(1, 1);
//     p.displayPoint();

//     Point q(4, 6);
//     q.displayPoint();

//     return 0;
// }

/* Create a function (Hint: Make it a friend function) which takes 2 point objects and computes the distance between those 2 points !

   Ex-
   
   1. Distance between (1, 1) and (1, 1) and Answer is (0) 
   2. Distance between (0, 1) and (0, 6) and Answer is (5) 
   3. Distance between (1, 0) and (70, 0) and Answer is (69) 
    
    */



// First type Homework !



// #include<iostream>
// #include<math.h>

// using namespace std;

// class Point_Distance
// {
//    int x, y;

//    friend void Point_Value(Point_Distance m, Point_Distance n);

//    public:

//     Point_Distance(int , int );

//     void Set_Point(int o, int r)
//     {
//        x = o;
//        y = r;
//     }

// };

// Point_Distance :: Point_Distance(int g, int h)
// {
//    x = g;
//    y = h;
// }

// void Point_Value(Point_Distance m, Point_Distance n)
// {
//      //   1 type

//    int Solution = (((n.x - m.x)*(n.x - m.x)) + ((n.y - m.y)*(n.y - m.y)));
//    cout<<sqrt(Solution)<<endl;

//    //      2 type

//    //  cout<<sqrt(((n.x - m.x)*(n.x - m.x)) + ((n.y - m.y)*(n.y - m.y)));

//     //        3  type

//    //  int x_diff = (n.x-m.x);
//    //  int y_diff = (n.y-m.y);
//    //  int diff = sqrt(pow(x_diff,2)+pow(y_diff,2));
//    //  cout<< "The difference is : "<<diff<<endl;
// }

// int main(){

//    Point_Distance t(1, 0);

//    Point_Distance u = Point_Distance(70, 0);

//    Point_Value(t, u);

//    return 0;
// }



//  Second type Homework !




// #include <iostream>
// #include <math.h>

// using namespace std;

// class Point_Distance
// {
//    int x, y, a, b;

// public:

//    Point_Distance(void);    //(int, int, int, int);

//    void PrintNumber()
//    {
//           //   1 type

//       cout << sqrt(pow((a - x),2) + pow((b - y),2));                 // pow and 2 is use to hole square a number !basically pow meaning is (power of) When someone write pow (,2) meaning is (power of 2) and pow (,3) is (power of 3)

//          //        2 type

//       // cout << sqrt(((a - x) * (a - x)) + ((b - y) * (b - y)));
//    }

//    void Give_Number()
//    {
//       cout<<"First"<<endl;
//       cin>>x;
//       cin>>y;
//       cin>>a;
//       cin>>b;
//    }

// };

// Point_Distance ::Point_Distance(void)//   (int m, int n, int o, int p)
// {
//    x = 0;
//    y = 1;
//    a = 0;
//    b = 6;
// }

// int main()
// {

//    Point_Distance t;

//    // t.Give_Number();
//    t.PrintNumber();
//    // t.Give_Number();


//    //  This is the testing code of pow

//    //  int x_diff = (1);
//    //  int y_diff = (2);
//    //  int diff = (pow(x_diff,3)+pow(y_diff,3));
//    //  cout<< "The difference is : "<<diff<<endl;
   
//    return 0;
// }



//     Third type Homework


#include<iostream>
#include<cmath>

using namespace std;

class point           //  Taking inputs from user
{
    int x1, x2, y1, y2;

    friend void Run(point);

    public:

      point(void);

      void Print(void);
};

point ::point(void)
{
    cout<<"Enter First two element:"<<endl;
    cout<<"Enter x1"<<endl;
    cin>>x1;

    cout<<"Enter y1"<<endl;
    cin>>y1;

    cout<<"Enter Second two element:"<<endl;
    cout<<"Enter x2"<<endl;
    cin>>x2;

    cout<<"Enter y2"<<endl;
    cin>>y2;

}

void Run(point R) 
{
    //  First type Run

   float Substract1, Square, Substract2, Underroot;

   Substract1 = (R.x2 - R.x1);

   Substract2 = (R.y2 - R.y1);

   Square = ((pow((Substract1), 2)) + (pow((Substract2), 2)));

   Underroot = sqrt(Square);

   // Second type Run

//    Substract1 = pow((R.x2 - R.x1), 2);

//    Substract2 = pow((R.y2 - R.y1), 2);

//    Underroot = sqrt(Substract1 + Substract2);

    cout<<"Your Answer is = "<<Underroot<<endl;

}

void point :: Print(void)
{
  cout<<"The element you want to know the distance between is this ("<<x1<<", "<<y1<<") and ("<<x2<<", "<<y2<<") !"<<endl;
  cout<<"Solution"<<endl;
}

int main(){

    point p;

    p.Print();

    Run(p);
   
    return 0;
}