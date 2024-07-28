//to remove a list element from a specified positions
//we use remove()
#include<iostream>
#include<list>
using namespace std;

int main(){
    //create a list
    list<int> numbers {1,2,1,3,4,1};
    //display the original list
    cout<<"Initial list: ";
    for(int number : numbers){
        cout<<number<<", ";
    }
    //remove all the elements with value 1
    numbers.remove(1);
    //display the mmodified list
    cout<<endl<<"Final List: ";
    for(int number: numbers){
        cout<<number<<", ";
    }
    return 0;
}