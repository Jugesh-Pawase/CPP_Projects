//Circular queue

#include <iostream>
using namespace std;

class CircularQueue {
private:
    int front, rear, size;
    int* array;

public:
    CircularQueue(int s) {
        size = s;
        array = new int[size];
        front = rear = -1;
    }

    bool isEmpty() {
        return front == -1 && rear == -1;
    }

    bool isFull() {
        return (rear + 1) % size == front;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue.\n";
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }

        array[rear] = value;
        cout << value << " enqueued to the queue.\n";
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue.\n";
            return;
        }

        cout << array[front] << " dequeued from the queue.\n";

        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }

        cout << "Queue elements: ";
        int i = front;
        do {
            cout << array[i] << " ";
            i = (i + 1) % size;
        }while (i != (rear + 1) % size);
        cout << endl;
    }
};

int main() {
    CircularQueue cq(5);

    cq.enqueue(1);
    cq.enqueue(2);
    cq.enqueue(3);
    cq.display();

    cq.dequeue();
    cq.display();

    cq.enqueue(4);
    cq.enqueue(5);
    cq.enqueue(6);
    cq.enqueue(7); // This will fail, as the queue is full
    cq.display();

return 0;
}
