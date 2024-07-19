//find_if without using any lambda expression. but use of any pre defined function
#include <iostream>
#include <vector>
#include <algorithm> // Include the algorithm header for std::find_if

// Custom predicate function to check if a number is even
bool isEven(int n) {
    return n % 2 == 0;
}

int main() {
    std::vector<int> num = {1, 3, 5, 8, 10, 13};

    // Using std::find_if with the custom predicate
    auto it = std::find_if(num.begin(), num.end(), isEven);

    if (it != num.end()) {
        std::cout << "First even number found is: " << *it << std::endl;
    } else {
        std::cout << "No even number found" << std::endl;
    }

    return 0;
}
