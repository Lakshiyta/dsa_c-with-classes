//Add the elements in linked list
#include<iostream>
#include<list>//doubly linked list
using namespace std;

int main(){
    //create the list
    list<int> numbers {1,2,3,4};
    //display the elements of the list
    cout << "The list : ";
    for(int number:numbers){
        cout << number << " ";
    }
    //Add the elements at the beginning
    numbers.push_front(0);
    //Add element at the end
    numbers.push_back(5);
    //display the modified list
    cout << "\nThe new list is : " ; 
    for(int number:numbers){
        cout << number << " ";
    }
    //remove first element
    numbers.pop_front();
    //remove the last element
    numbers.pop_back();

    cout << "\nThe final list is : ";
    for(int number :  numbers){
        cout << number << " " ;
    }

    return 0;
    
}