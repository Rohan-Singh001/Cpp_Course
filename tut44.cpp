#include<iostream>

using namespace std;

/* Virtual Base class
   Example to me from my side
*/

class Student
{
    protected:
       
       int roll_no;
       int Enroll;
    
    public:
       
       void set_number(int r, int e)
       {
          roll_no = r;
          Enroll = e;
       }

       void print_number(void)
       {
         cout<<"Your Roll no is: "<<roll_no<<endl;
         cout<<"Your Enrollment no is: "<<Enroll<<endl;
       }
};

class Test : public virtual Student
{
    protected:
       
       float english, code;
    
    public:
       
       void set_marks(float e1, float c1)
       {
           english = e1;
           code = c1;
       }

       void print_marks(void)
       {
           cout<<"Your marks is: "<<endl
               <<"English: "<<english<<endl
               <<"Code: "<<code<<endl;
       }
       
};

class Extra_Activity : virtual public Student
{
    protected:
       
       char Gaming;
    
    public:
       
       void set_grade(char g)
       {
           Gaming = g;
       }

       void print_grade(void)
       {
           cout<<"Your grade is: "<<Gaming<<endl;
       }
};

class Result : public Test, public Extra_Activity
{
    private:
       
       float Total;
    
    public:
       
       void display(void)
       {
           Total = english + code;

           print_number();
           print_marks();
           print_grade();
           cout<<"Your total number is: 200/"<<Total<<endl;
       }
};

int main(){
    int roll, enr;
    float eng_mar, code_mar;
    char grad;

    cout<<"Enter Roll no: "<<endl;
    cin>>roll;

    cout<<"Enter Enrollment no: "<<endl;
    cin>>enr;

    cout<<"Enter English marks: "<<endl;
    cin>>eng_mar;

    cout<<"Enter Code marks: "<<endl;
    cin>>code_mar;

    cout<<"Enter Your grade: "<<endl;
    cin>>grad;

    Result rohan;

    rohan.set_number(roll, enr);
    rohan.set_marks(eng_mar, code_mar);
    rohan.set_grade(grad);

    rohan.display();
    
    return 0;
}               