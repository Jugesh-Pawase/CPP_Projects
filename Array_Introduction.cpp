//Array introduction

#include<iostream>
using namespace std;

int main()
{
    int size;
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
     
    return 0;
    }