#include<iostream>

using namespace std;

/*
 STL = |  Containers  | + |  Algorithm  | + |  Iterators  |
       |     ^        |   |      ^      |   |     ^       |
       |  Object which|   | Procedure to|   | Object which|
       |  Stores data |   | process     |   | points to an|
                          | data        |   | element of a|
                                            | Container   |
*/

/*
 Containers
 |
 |-> Sequence Containers = Use linear fashion to store data 
 |                         ( 7 -> 9 -> 11 -> 1)=> This is a list which is used a Linear fashion
 |                         There is a many Example of sequence Container
 |                         1. Vector
 |                         2. List
 |                         3. Dequeue  etc.
 |
 |-> Associative Containers = Direct Access          8
 |                                                 __|__
 |                                                |     | (Tree)
 |                                                6     7
 |                            There is a many Example of Associative Container
 |                            1. Set
 |                            2. Multiset
 |                            3. Map
 |                            4. Multimap
 |
 |-> Derived Containers = There is derived to a Sequence and AssociativeContainers.
                          Real world Modeling
                          Ex =>    1. Stack   |6| This is use a LIFO (Last in first out)
                                              |5|  Jo last me andar gaya hai vo sabse phele bhar ata hai!
                                              |4|
                                               |
                                              close this side

                                   2. Queue   Enter this side
                                               |
                                              |6|  This is use a FIFO (First in first out)
                                              |5|  Jo phele andar gaya hai vo phele bhar ata hai
                                              |4|
                                               |
                                              Out this side

                                   3. Priority-queue
*/

/*
 Sequence Containers
 
 1. Vector -> Random Access(RA) = Fast
              Insertion / Deletion in middle = Slow
              Insertion / Deletion at the end = Fast

 2. List ->  Random Access(RA) = Slow
             Insertion / Deletion in middle = Fast
             Insertion / Deletion at the end = fast
*/

/*
 Associative Containers

 All Operations fast
 except RA  => Random Access is not use in Associative Containers
*/

/*
 Derived Containers
 
 Depends 
 
 Derived full overview in Data structure course by code with Harry
*/

int main(){
    
    return 0;
}