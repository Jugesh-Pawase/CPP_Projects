//Insertion sort

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

    for(int i=1; i<size; i++) {
        int current = array[i];
        int j = i-1;

        while(array[j]>current && j>=0) {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = current;
    }

    cout << "Elements of array after insertion sort are:" << endl;
    for(int i=0; i<size; i++) {
        cout<<array[i]<<" ";
    }
    cout<< endl;

    return 0;
}