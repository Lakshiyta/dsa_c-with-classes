//displaying the data in queue one by one
#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<string> q;
    // Add elements to the queue (you can enter them here)
    q.push("Karshima");
    q.push("Prachi");
    q.push("Riyaa");

    // Display the elements using a for loop
    while (!q.empty()) {
        string element = q.front();
        cout << "Queue element: " << element << endl;
        q.pop();
    }

    return 0;
}
