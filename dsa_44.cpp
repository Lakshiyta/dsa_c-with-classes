#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<string> q;
    q.push("Alia");
    q.push("Saina");
    q.push("Vansha");

    // Finding the size of the queue
    cout << "Size of the queue: " << q.size() << endl;

    // Popping an element from the front
    q.pop();

    // Accessing the front element
    if (!q.empty()) {
        cout << "Front element: " << q.front() << endl;
    } else {
        cout << "Queue is empty." << endl;
    }
    return 0;
}
