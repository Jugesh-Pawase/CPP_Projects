// linear search in array

#include<iostream>
using namespace std;

int linearSearch(int array[], int size, int element) {
    for(int i=0; i<size; i++) {
        if(array[i] == element) {
            return i;
        }
    }
    return -1;
}

int main()
{
    int size, element;
    cout<<"Enter the size of array"<<endl;
    cin>>size;

    int array[size];
    cout<<"Enter "<<size<<" elements in array: "<<endl;
    for(int i=0; i<size; i++) {
        cin>>array[i];
    }

    cout << "Enter the element which you want to search" << endl;
    cin >> element;

    int searchIndex = linearSearch(array, size, element);
    cout << "The element "<<element<<" found at index "<<searchIndex<<endl;

    return 0;
}