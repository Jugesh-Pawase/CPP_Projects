// Insertion of element in array

#include<iostream>
using namespace std;

int main()
{
    int size, x, y;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    
    int array[size];
    cout<<"Enter "<<size<<" elements in array: "<<endl;
    for(int i=0; i<size; i++){
       cin>>array[i];
    }
    
    cout<<"Elements of array are: "<<endl;
    for(int i=0; i<size; i++){
       cout<<array[i]<<" ";
    }
    cout<<endl;
    
    cout << "Enter the new element" << endl;
    cin >> x;
    cout << "Enter the index number" << endl;
    cin >> y;
    
    for(int i=size-1; i>=y; i--){
       array[i+1] = array[i];
    }
       array[y] = x;
       size++;
       
    cout<<"Elements of array after insertion are: "<<endl;
    for(int i=0; i<size; i++){
       cout<<array[i]<<" ";
    }
    return 0;
}
