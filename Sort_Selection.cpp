//Selection sort

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

    for(int i=0; i<size-1; i++) {
        for(int j=i+1; j<size; j++) {
            if(array[j] < array[i]) {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;

            }
        }
    }
    cout << "Elements of array after selection sort are:" << endl;
    for(int i=0; i<size; i++) {
        cout<<array[i]<<" ";
    }
    cout<< endl;
    
    return 0;
}