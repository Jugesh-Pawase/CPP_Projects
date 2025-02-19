//Bubble sort

#include<iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter size of array" << endl;
    cin >> size;

    int array[size];

    cout << "Enter elements in array" << endl;
    for(int i=0; i<size; i++) {
        cin >> array[i];
    }
    cout << "Elements of array are:" << endl;
    for(int i=0; i<size; i++) {
        cout<<array[i]<<" ";
    }
    cout<< endl;

    int count = 1;
    while(count < size-1) {
        for(int i=0; i<size-count; i++) {
            if(array[i] > array[i+1]) {
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
        count++;
    }

    cout << "Elements of array after bubble sort are:" << endl;
    for(int i=0; i<size; i++) {
        cout<<array[i]<<" ";
    }
    cout<< endl;

    return 0;
}
