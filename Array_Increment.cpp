//Array introduction

#include<iostream>
using namespace std;

void incrementArray(int array[], int size, int increment){
    for (int i = 0; i < size; i++){
        array[i] += increment;
    }
}

int main()
{
    int size, increment;
    cout<<"Enter the size of array: ";
    cin>>size;
    
    int array[size];
    cout<<"Enter "<<size<<" elements in array: ";
    for(int i=0; i<size; i++){
       cin>>array[i];
    }
    
    cout<<"Elements of array are: ";
    for(int i=0; i<size; i++){
       cout<<array[i]<<" ";
    }
    cout << endl;

    cout << "Enter the number by which you want to increment the array elements: ";
    cin >> increment;

    incrementArray(array, size, increment);
    cout<<"Elements of array after increment are: ";
    for(int i=0; i<size; i++){
       cout<<array[i]<<" ";
    }

    return 0;
}