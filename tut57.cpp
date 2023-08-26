#include<iostream>
#include<cstring>

using namespace std;

//       String or char

// #include<iostream>
// #include<cstring>

// /* 
//   (1) = String
//   String is used to store a word or sentence 
//   in variable
//   Ex->
//        string Store_word = ("Rohan Choudhary");
  
//   (2) = Char 
//   Char is used to store a character in variable 
//   in char store a word or sentence use array([]) 
//   like this!
//   Ex->
//        char Store_word[] = "Rohan Choudhary";
//   */

// using namespace std;

// int main(){

//   // char Store_word[] = "Rohan Choudhary";

//   string Store_word = ("Rohan Choudhary");

//   cout<<Store_word<<endl;
      
//   return 0;
// }

//  Virtual Function

class CWH
{
    protected:
       string title;
       float rating;
    
    public:
       CWH(string s, float r)
       {
         title = s;
         rating = r;
       }

       virtual void display()
       {
          cout<<"This display run when base class display is not virtual "
              <<"and the base class display is virtual then both derived class display run"<<endl;
       }
};

class CWHVideo : public CWH
{
    float videoLength;

    public:
       
       CWHVideo(string s, float r, float vl) : CWH(s, r)
       {
          videoLength = vl;
       }

       void display()
       {
          cout<<"This is an amazing video with title "<<title<<endl;
          cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
          cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
       }
};

class CWHText : public CWH
{
    int words;

    public:
       
       CWHText(string s, float r, int wc) : CWH(s, r)
       {
          words = wc;
       }

       void display()
       {
          cout<<"This is an amazing text tutorial with title "<<title<<endl;
          cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
          cout<<"No. of words in this text tutorial is: "<<words<<" words"<<endl;
       }
};

int main(){
    string title;
    float rating, vlen;
    int words;

    cout<<"\n"<<endl;

    // For code With Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);
    // djVideo.display();

     cout<<"\n"<<endl;

    // For code With Harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);
    // djText.display();

    // This is Base class Pointer point derived class and run!

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    cout<<"\n"<<endl;
    tuts[1]->display();

    
    return 0;
}


// Rules for virtual function

// 1. They cannot be static
// 2. They are accessed by object pointers 
// 3. Virtual functions can be a friend of another class 
// 4. A virtual function in base class might not be used.
// 5. If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class


//  Point 5 = If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class

// #include<iostream>
// #include<cstring>

// using namespace std;

// class CWH
// {
//     protected:
//        string title;
//        float rating;
    
//     public:
//        CWH(string s, float r)
//        {
//          title = s;
//          rating = r;
//        }

//        virtual void display()
//        {
//           cout<<"This display run when base class display is not virtual "
//               <<"and the base class display is virtual then both derived class display run"<<endl;
//        }
// };

// class CWHVideo : public CWH
// {
//     float videoLength;

//     public:
       
//        CWHVideo(string s, float r, float vl) : CWH(s, r)
//        {
//           videoLength = vl;
//        }

//        void display()
//        {
//           cout<<"This is an amazing video with title "<<title<<endl;
//           cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
//           cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
//        }
// };

// class CWHText : public CWH
// {
//     int words;

//     public:
       
//        CWHText(string s, float r, int wc) : CWH(s, r)
//        {
//           words = wc;
//        }

//       //  void display()
//       //  {
//       //     cout<<"This is an amazing text tutorial with title "<<title<<endl;
//       //     cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
//       //     cout<<"No. of words in this text tutorial is: "<<words<<" words"<<endl;
//       //  }
// };

// int main(){
//     string title;
//     float rating, vlen;
//     int words;

//     cout<<"\n"<<endl;

//     // For code With Harry Video
//     title = "Django tutorial";
//     vlen = 4.56;
//     rating = 4.89;
//     CWHVideo djVideo(title, rating, vlen);
//     // djVideo.display();

//      cout<<"\n"<<endl;

//     // For code With Harry Text
//     title = "Django tutorial Text";
//     words = 433;
//     rating = 4.19;
//     CWHText djText(title, rating, words);
//     // djText.display();

//     // This is Base class Pointer point derived class and run!

//     CWH* tuts[2];
//     tuts[0] = &djVideo;
//     tuts[1] = &djText;

//     tuts[0]->display();
//     cout<<"\n"<<endl;
//     tuts[1]->display();

    
//     return 0;
// }