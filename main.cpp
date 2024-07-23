#include <iostream>
#include <vector>
#include "sorting.h"

int main() {
    std::vector<int> arr = {76, 21, 12, 98, 34, 5, 66};

    int choice;
    std::cin >> choice;

    switch (choice) {
        case 1:
            bubbleSort(arr);
            break;
        case 2:
            selectionSort(arr);
            break;
        case 3:
            insertionSort(arr);
            break;
        case 4:
            mergeSort(arr, 0, arr.size() - 1);
            break;
        default:
            std::cout << "Invalid choice!" << std::endl;
            return 1;
    }

    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
