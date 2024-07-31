//LEETCODE
//next greater number 2
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, -1); // Initialize the result array with -1
        stack<int> s; // Stack to keep track of indices

        // Traverse the array twice to handle the circular nature
        for (int i = 0; i < 2 * n; ++i) {
            while (!s.empty() && nums[s.top()] < nums[i % n]) {
                result[s.top()] = nums[i % n];
                s.pop();
            }
            if (i < n) {
                s.push(i);
            }
        }

        return result;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    Solution solution;
    vector<int> result = solution.nextGreaterElements(nums);

    cout << "Next greater elements: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
