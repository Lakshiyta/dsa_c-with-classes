#include<iostream>
#include<array>
using namespace std;
int main(){
    //normal array
    //int a[]={};

    array<int,4> a={3,4,2,7};
    int size = a.size();
    cout<<size<<endl;

    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    
    cout<<"Element at index: "<<a.at(3)<<endl;
    bool trueFalse=a.empty();
    cout<<"True of false: "<<trueFalse;
    bool empty=a.empty();
    cout<<" is array is empty or not:"<<empty;
    cout<<"\nfirst element="<<a.front()<<endl;
    cout<<"\nlast element="<<a.back()<<endl;
}