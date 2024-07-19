//Lambda in Standard Algorithm
//It is often used with standard algorithms, such as std::sort
#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    std::vector<int> numbers = {5,3,8,1,4};
    std::sort(numbers.begin(), numbers.end(), [](int a,int b){
        return a < b;
    });
    std::cout<<"Sorted numbers: ";
    for(int num: numbers){
        std::cout<<num<<" ";
    }
    std::cout<<std::endl;
    return 0;
}