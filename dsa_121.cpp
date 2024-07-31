//LEETCODE
//Power of Two
#include <iostream>

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;
        return (n & (n - 1)) == 0;
    }
};

int main() {
    Solution solution;
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    if (solution.isPowerOfTwo(n)) {
        std::cout << n << " is a power of two." << std::endl;
    } else {
        std::cout << n << " is not a power of two." << std::endl;
    }
    return 0;
}
