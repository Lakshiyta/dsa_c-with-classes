//MERGE SORT
#include<iostream>
#include<vector>
#include<algorithm>
int main(){
    std::vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    std::stable_sort(arr.begin(),arr.end());

    for(int num: arr){
        std::cout<<num<<" ";
    }
    return 0;
}