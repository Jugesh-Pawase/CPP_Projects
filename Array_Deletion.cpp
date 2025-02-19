//Deletion of element in array 

#include<iostream>
using namespace std;

int main()
{
    int size, y;
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
    
    cout << "Enter the index number" << endl;
    cin >> y;
    
    for(int i=y; i<size-1; i++){
       array[i] = array[i + 1];
    }
      size--;
       
    cout<<"Elements of array after deletion are: "<<endl;
    for(int i=0; i<size; i++){
       cout<<array[i]<<" ";
    }
    return 0;
}