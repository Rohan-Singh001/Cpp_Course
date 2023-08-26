#include<iostream>

using namespace std;

int main(){
    // cout<<"Rohan Choudhary"<<endl;

//******************Selection Structure*********************    

   //1.  If , else

/* int marks;
   cout<<"What is your total marks: "<<endl;
   cin>>marks;

   if(marks<33){
    cout<<"You are fail. You will join second paper to pass this year."<<endl;
   }
   else{
    cout<<"You will pass and your result is good"<<endl;
   }  */

    //2.  If, else ladder

    int age;
    cout<<"Tell me your age: "<<endl;
    cin>>age;
/*  if((age<18) && (age>0)){
        cout<<"You can not come to my party"<<endl;
    }
    else if(age==18){
        cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    }
    else if(age<1){
        cout<<"You are not yet born"<<endl;
    }
    else{
        cout<<"You can come to the party"<<endl;
    }   */

    //3.  Switch case

    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 22:
        cout<<"You are 22"<<endl;
        break;
    case 2:
        cout<<"You are 2"<<endl;
        break;
    
    default:
    cout<<"No special cases"<<endl;
        break;
    }

    cout<<"Done with switch case. "<<endl;

    return 0;
}