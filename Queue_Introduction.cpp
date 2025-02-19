//Queue introduction 

#include<iostream>
using namespace std;
#define n 20

class queue {
    int *array;
    int front;
    int back;

public:
    queue() {
        array = new int[n];
        front = -1;
        back = -1;
    }
    void push(int val) {
        if(back == n-1) {
            cout << "Queue is full" << endl;
        }
        else {
            back++;
            array[back] = val;
            if(front == -1) {
                front++;
            }
        }
    }
    void pop() {
        if(front==-1 || front>back) {
            cout<<"No element in queue"<<endl;
        }
        else {
            front++;
        }
    }
    void peek() {
        if(front==-1 || front>back) {
            cout<<"No element in queue"<<endl;
        }
        else {
            cout <<array[front]<< endl;
        }
    }
    bool empty() {
        if(front==-1 || front>back) {
            return true;
        }
        else {
            return false;
        }
    }
};

int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    q.peek();
    q.pop();
    q.peek();
    q.pop();
    q.peek();
    q.pop();
    q.peek();
    q.pop();
   
    q.pop();

    cout << q.empty() << endl;

    return 0;
}
