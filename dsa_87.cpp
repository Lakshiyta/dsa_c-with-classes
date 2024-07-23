//Quick sorted array and then in descending order
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    sort(arr.begin(), arr.end());

    cout << "Sorted array :";
    for (int num : arr) {
        cout << " " << num;
    }
    // Reverse the order to get descending order
    reverse(arr.begin(), arr.end());

    cout << "\nSorted array (descending):";
    for (int num : arr) {
        cout << " " << num;
    }
    return 0;
}
