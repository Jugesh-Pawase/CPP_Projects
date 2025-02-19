#include<iostream>
using namespace std;

int main(){
int rows, cols, i, j;

cout<<"Enter the number of rows of matrix: ";
cin>>rows;
cout<<"Enter the number of columns of matrix: ";
cin>>cols;

int matrix1[rows][cols], matrix2[rows][cols], resMatrix[rows][cols];

cout<<"Enter the elements of the first matrix: ";
for(i=0; i<rows; i++){
    for(j=0; j<cols; j++){
        cin>>matrix1[i][j];
    }
}

cout<<"Enter the elements of the second matrix: ";
for(i=0; i<rows; i++){
    for(j=0; j<cols; j++){
        cin>>matrix2[i][j];
    }
}

for(i=0; i<rows; i++){
    for(j=0; j<cols; j++){
        resMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
    }
}

cout<<"Addition marix of two matrices: \n";
for(i=0; i<rows; i++){
    for(j=0; j<cols; j++){
        cout<<resMatrix[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}