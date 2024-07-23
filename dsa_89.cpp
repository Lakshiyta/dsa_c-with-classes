//Leetcode[Richest Customer Wealth]
//1st solution
#include <iostream>
#include <vector>
#include <climits> 
using namespace std;

int maximumWealth(const vector<vector<int>>& accounts) {
    int maxWealth = INT_MIN; 

    for (const auto& customer : accounts) {
        int tempSum = 0; 

        for (int balance : customer) {
            tempSum += balance;
        }

        if (tempSum > maxWealth) {
            maxWealth = tempSum;
        }
    }

    return maxWealth;
}

int main() {
    vector<vector<int>> accounts = {{1, 2, 3}, {3, 2, 1}};
    cout << "Richest customer's wealth: " << maximumWealth(accounts) << std::endl;

    return 0;
}
//2nd solution
/*class Solution {
public:
 int maximumWealth(vector<vector<int>>& accounts) {
  int total=0;
  int sum=0;
  for(int i=0;i<accounts.size();i++){
   // for(int j=0;j<accounts[0].size();j++){
   // sum+=accounts[i][j];
   // }
   // if(sum>max){
   // max=sum;
   // }
   // sum=0;
   sum=accumulate(accounts[i].begin(),accounts[i].end(),0);
   // if(sum>max){
   // max=sum;
   // }
    total=max(total,sum);
   sum=0;
  }
  return total;
 }
//3rd solution
class Solution {
public:
 int maximumWealth(vector<vector<int>>& accounts) {
  int max=0;
  int sum=0;
  for(int i=0;i<accounts.size();i++){
   sum=accumulate(accounts[i].begin(),accounts[i].end(),0);
   if(sum>max){
    max=sum;
   }
   sum=0;
  }
  return max;
 }
};*/