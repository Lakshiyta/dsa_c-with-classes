//how to remove element from a specified position using iterator
#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l {0,1,2,3,4,5,3};
    list<int>::iterator it = l.begin();
    cout << "Initial list : ";
    for(int number:l){
        cout<<number<<" ";
    }
    //point iterator to the 4th element
    for (int i=0; i<3 ; i++){
        ++it;
    }
    //remove the element pointed by iterator
    l.remove(*it);
    
    cout << endl << "final list  ";
    for(int number:l){
        cout << number << " ";
    }
    
    return 0;
}
