//Stack using array

#include <iostream>
using namespace std;

#define n 100

class stack {
    int *array;
    int top;

public:
    stack() {
        array = new int[n];
        top = -1;
    }
    void push(int x) {
        if(top == n-1) {
            cout<<"Stack overflow"<<endl;
        }
        else {
            top++;
            array[top] = x;
        }
    }
    void pop() {
        if(top == -1) {
            cout << "No element in stack" << endl;
        }
        else {
            top--;
        }
    }
    void Top() {
        if(top == -1) {
            cout << "No element in stack" << endl;
        }
        else {
            cout<<array[top]<<endl;
        }
    }
    bool empty() {
        return top == -1;
    }

};

int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.Top();
    st.pop();
    st.Top();
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;
    st.Top();
        return 0;
}
