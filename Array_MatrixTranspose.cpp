#include<iostream>
using namespace std;

int main(){
int rows, cols, i, j;
cout<<"Enter the number of raws: ";
cin>>rows;
cout<<"Enter the number of cols: ";
cin>>cols;

int matrix[rows][cols];
cout<<"Enter the elements of matrix: ";
for(i=0; i<rows; i++){
    for(j=0; j<cols; j++){
    cin>>matrix[i][j];
    }
}

cout<<"Elements of matrix: \n";
for(i=0; i<rows; i++){
    for(j=0; j<cols; j++){
    cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}

int transMatrix[cols][rows];
for(i=0; i<rows; i++){
    for(j=0; j<cols; j++){
    transMatrix[j][i] = matrix[i][j];
    }
}

cout<<"Elements of transpose matrix: \n";
for(i=0; i<cols; i++){
    for(j=0; j<rows; j++){
    cout<<transMatrix[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}