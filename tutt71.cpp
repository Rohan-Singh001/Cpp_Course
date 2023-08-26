#include<iostream>
#include<vector>

using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout<<"Displaying this vector "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" "; // at is use to access element like v[i] 
    }
    cout<<endl;
}

int main(){

    // Ways to create a vector

    // vector <int> vec1;   // zero length integer vector

    int element, size = 5;

    // cout<<"Enter the size of your vector"<<endl;
    // cin>>size;

    // for (int i = 0; i < size; i++)
    // {
    //    cout<<"Enter the element to add to this vector: "<<endl;
    //    cin>>element;
    //    vec1.push_back(element);
    // }
    // vec1.pop_back();    // This is use to delete last element

    
    // display(vec1);

    // vector<int> :: iterator iter = vec1.begin();   // Isme being ko humne vec1 ke first element se point kara diya hai!
    // // vec1.insert(iter, 566);  // Point First element
    // // vec1.insert(iter+1, 566);   // Point Second element
    // vec1.insert(iter+1,5, 566);  // Point Second element and (,5) means 566 number print five time in Second position After that print another number
    //                              // (,5) ki jagah hum kuch bhi likh sakte hai Ex = 50, 500, 2, 88 etc.

    // display(vec1);

    

    vector <int> vec1;   // zero length integer vector
    // display(vec1);

    // vector<char> vec2(4);   // 4-element character vector
    // vec2.push_back('5');

    // display(vec2);

    // vector<char> vec3(vec2);   // 4-element character vector from vec2
    // display(vec3);

    vector<int> vec4(4, 13);   // 6-element vector of 3s
    display(vec4);
    cout<<vec4.size();


    return 0;
}


// H.W 


// #include<iostream>
// #include<vector>

// using namespace std;

// int main(){
    
//     //Element Access front
    
//     // vector<int> Addition;

//     // int uu;

//     // Addition.push_back(78);
//     // Addition.push_back(16);

//     // uu = Addition.front() - Addition.back();

//     // cout<<"The Answer is: "<<uu<<endl;


//     //Element Access back

//     vector <int> Numbers;

//     Numbers.push_back(0);

//     cout<<"This is number: "<<endl;

//     while(Numbers.back() != 20)
//     {
//         Numbers.push_back(Numbers.back() + 1);
//     }

//     for (unsigned i = 0; i < Numbers.size(); i++)
//     {
//     if(i == 5)
//     {
//         continue;
//     }
//     else if (i == 15)
//     {
//     //    break;
//     continue;
//     }

//     cout<<Numbers[i]<<endl;

//     }
//     return 0;
// }