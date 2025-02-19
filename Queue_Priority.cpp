//Priority queue

#include <iostream>
#include <queue>

int main() {
    // Initialize a max heap (default) priority queue
    std::priority_queue<int> maxHeap;

    // Add elements to the priority queue
    maxHeap.push(3);
    maxHeap.push(1);
    maxHeap.push(2);

    // Pop and print elements in descending order
    while (!maxHeap.empty()) {
        std::cout << "Element: " << maxHeap.top() << std::endl;
        maxHeap.pop();
    }

    return 0;
}