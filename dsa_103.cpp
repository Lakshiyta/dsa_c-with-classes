//if list is empty, then add element to first or else add element to the specified position by using stl function
#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> numbers; // Create an empty list

    // Check if the list is empty
    if (numbers.empty()) {
        // Add an element to the first position (beginning)
        numbers.push_front(42); 
    } else {
        // Add an element to a specified position (e.g., index 2)
        int position = 2; 
        int valueToAdd = 99; 
        auto itr = numbers.begin();
        advance(itr, position); // Move iterator to the specified position
        numbers.insert(itr, valueToAdd);
    }

    // Display the updated list
    cout << "List after modification: ";
    for (const auto& num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
