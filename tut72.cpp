#include<iostream>
#include<list>

using namespace std;

void display(list<int> &lst)
{
    list<int> :: iterator it;

    for (it=lst.begin(); it!=lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    
    cout<<endl;

}

int main(){

    // 6 8 9

    list<int> list1;    // List of 0 Length

    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    list1.push_back(9);


    display(list1);

    // Removing elements from the list

    // list1.pop_back();  // This is use to delete the last element
    // list1.pop_front();  // This is use to delete the First element
    // list1.remove(9);    // This is use to remove element in the middle of our list
                        // Agar hamari list me 2, 3 element ek jaise hai(like in this list two element are 9) vo sare remove ho jayge

    // display(list1);


    // Sorting the list

    // list1.sort();  // This is use to short a list
                      // In sort we are sort a list in increasing order(assending)

    // display(list1);

    // Reversing the list

    // list1.reverse();   // This is use to reverse the list

    // display(list1);


    // If we will not create void display type function then 
    // we are writing a code like this to display

    // list<int> :: iterator iter;
    // iter = list1.begin();

    // cout<< *iter<<" ";
    // iter++;
    // cout<< *iter<<" ";
    // iter++;
    // cout<< *iter<<" ";
    // iter++; 
    // cout<< *iter<<" ";
    // iter++;
    // cout<< *iter<<" ";
    // iter++;


    list<int> list2(3);    // Empty List of size 7
    
    list<int> :: iterator iter;

    iter = list2.begin();

    *iter = 45;
    iter++;

    *iter = 6;
    iter++;

    *iter = 9;
    iter++;

    display(list2);

    // list1.sort();
    // list2.sort();

    list1.merge(list2);  // This is use to merging two list 
                         // In this list [list1.merge(list2);] we are merging list2 in list1
                         // If we will write like this (list2.merge(list1);) then we will merge list1 in list2
    cout<<"List 1 After merging: ";
    display(list1);

    // list1.sort();

    // display(list1);

    return 0;
}



// H.W = Swap List


// #include<iostream>
// #include<list>

// using namespace std;

// // In this tutorial we are swap one list to another list

// // This is display function to display list
// void display(list<int> &lst)
// {
//     list<int> :: iterator it;

//     for (it=lst.begin(); it!=lst.end(); it++)
//     {
//         cout<<*it<<" ";
//     }
    
//     cout<<endl;

// }

// int main(){
    
//     // These two are list
//     list<int> First_List;
//     list<int> Second_List;

//     // In this we are store element in list 1
//     First_List.push_back(4);
//     First_List.push_back(7);
//     First_List.push_back(8);

//     // In this we are store element in list 2
//     Second_List.push_back(1);
//     Second_List.push_back(4);
//     Second_List.push_back(5);
//     Second_List.push_back(9);
    
//     // Print both list using display function
//     display(First_List);
//     display(Second_List);

//     // Swap first list in second list
//     Second_List.swap(First_List);  // This is used to swap list

//     // Print second list
//     display(Second_List);

//     return 0;
// }