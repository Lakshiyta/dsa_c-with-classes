//creating a vector function and iterating it without using the stl library
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4};

    // Iterate through the vector using direct access to values
    for (auto& value : arr) {
        cout << value << " ";
    }

    return 0;
}
