#include <iostream>

using namespace std;

int main() {
    int scores[10] {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    int* p_score {scores};

    // Print the address
    cout << "scores : " << scores << endl; // Array
    cout << "p_score : " << p_score << endl; // Pointer
    cout << "&scores[0] : " << &scores[0] << endl;

    // Print the content at that address
    cout << "\nPrinting out data at array address:\n";
    cout << "*scores : " << *scores << endl;
    cout << "scores[0] : " << scores[0] << endl;
    cout << "*p_score : " << *p_score << endl;
    cout << "p_score[0] : " << p_score[0] << endl;

    // Differences
    int number {21};
    p_score = &number;

    // Note: You cannot directly assign an array to a pointer
    // scores = &number; // This line will cause an error

    cout << "\np_score : " << p_score << endl; // Pointer

    // Calculate the size of the array using sizeof
    size_t array_size = sizeof(scores) / sizeof(scores[0]);
    cout << "Array size : " << array_size << endl;

    return 0;
}
