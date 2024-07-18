#include<iostream>
#include<set>
using namespace std;
//you can not add duplicate value
//take the value in sorted order
int main(){
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);
    s.insert(0);

    for(auto i:s){
        cout<<i<<endl;
    }cout<<endl;
    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    for(auto i:s){
        cout<<i<<endl;
    }
    cout<<endl;
    //find the element is present in set or not
    cout<<"is present"<<s.count(7)<<endl;
    set<int>::iterator itr=s.find(5);
    for(auto it=itr;it!=s.end();i++){
        cout<<"it"<<" "; //this is pointers
    }cout<<endl;
}