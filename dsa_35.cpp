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
    
}

//because it creates a new vector and with double size and older vector data is stored in thr new vector 