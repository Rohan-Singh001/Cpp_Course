#include<iostream>
#include<map>
#include<string>

using namespace std;

// Map is an associative array
int main(){
    
    // map declaration and assign values
    map<string, int> marksMap;
    marksMap["Harry"] = 98;
    marksMap["Jack"] = 59;
    marksMap["Rohan"] = 2;
    
    // Create iterator
    map<string, int> :: iterator iter;

    // Insert two names with number values in map
    marksMap.insert({{"Kozume", 169}, {"Kuroo", 187}});

    // Creating for loop to display 
    for (iter=marksMap.begin(); iter!=marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    
    // This is use to check the size of map
    cout<<"The size is: "<<marksMap.size()<<endl;

    // This is use to check the maximum size of map
    cout<<"The max size is: "<<marksMap.max_size()<<endl;

    // This is use to check what value return our empty function
    cout<<"The empty's return value is: "<<marksMap.empty()<<endl;

    return 0;
}