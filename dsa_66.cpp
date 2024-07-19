//mutable keyword demo
#include<iostream>

int main(){
    int x= 10;

    auto modifyX = [x]() mutable{
        x=20; //This modifies the local copy of x, not the orginal x
        std::cout<<"Inside lambda, x = "<<x<<std::endl;
    };
    modifyX();
    std::cout<<"outside lambda, x= "<<x<<std::endl; //Output Outside lambda, x=10;

    return 0;
}