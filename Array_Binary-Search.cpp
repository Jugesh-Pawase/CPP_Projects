//Binary search in array 

#include<iostream>
using namespace std;

int binarySearch(int array[], int size, int element) {
    int low, mid, high;
    low = 0;
    high = size-1;
    while(low <= high) {
        mid = (low + high)/2;
        if(array[mid] == element) {
            return mid;
        }
        else if(array[mid] < element) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
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

    int searchIndex = binarySearch(array, size, element);
    cout << "The element "<<element<<" found at index "<<searchIndex<<endl;

    return 0;
}
