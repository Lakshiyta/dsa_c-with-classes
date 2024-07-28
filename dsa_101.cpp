//Access elements using an iterator
//we can use iterators to access a list element at a specified position
#include<iostream>
#include<list>
using namespace std;

int main(){
    //create a list
    list<int> numbers = {1,2,3,4,5};
    //create a iterator to print to the first element of the list
    list<int>::iterator itr = numbers.begin();
    //increment itr to print to the 2nd element
    ++itr;
    //display the 2nd element
    cout<<"Second element; "<<*itr<<endl;
    //increment itr to print to the 4th element
    ++itr;
    ++itr;
    //display the 4th element
    cout<<"Fourth element: "<<*itr;
    return 0;
}