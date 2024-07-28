//add an elements at a specified position by using insert function
#include<iostream>
#include<list>
using namespace std;

int main(){
    //create a list
    list<int> numbers {1,2,3};
    //display the original list
    cout<<"Initial List: ";
    for(int number : numbers){
        cout<< number << ", ";
    }
    //create an iterator to point to the 1st position
    list<int>::iterator itr = numbers.begin();
    //incremnet the iterator to point to the 3rd position
    ++itr;
    ++itr;
    //insert 0 at the 3rd position of list
    numbers.insert(itr, 0);
    //display the modigied list
    cout<<endl<<"\nFinal List: ";
    for(int numbers: numbers){
        cout<<numbers<<", ";
    }
    return 0;
}