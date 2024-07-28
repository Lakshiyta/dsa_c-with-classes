#include <iostream>
#include <list>
using namespace std;

int main() {
    // Create a list
    list<int> numbers = {1, 2, 3, 4, 5};

    // Display the third element
    cout << "Third element: " << numbers.front() << endl;

    // Display the fifth element 
    int fifthElement = 0;
    for (int i = 0; i < 5; ++i) {
        if (i == 4) {
            fifthElement = numbers.front();
        }
        numbers.pop_front();
    }
    cout << "Fifth element: " << fifthElement << endl;

    return 0;
}
