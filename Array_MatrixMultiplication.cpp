#include<iostream>
using namespace std;
int main(){
int rows1, cols1, rows2, cols2, i, j, sum=0;

cout<<"Enter the number of rows of first matrix: ";
cin>>rows1;
cout<<"Enter the number of columns of first matrix: ";
cin>>cols1;
int matrix1[rows1][cols1];
cout<<"Enter the elements of the first matrix: ";
for(i=0; i<rows1; i++){
    for(j=0; j<cols1; j++){
        cin>>matrix1[i][j];
    }
}

cout<<"Enter the number of rows of second matrix: ";
cin>>rows2;
cout<<"Enter the number of columns of second matrix: ";
cin>>cols2;

if(rows2 != cols1){
    cout<<"There should equal no. of columns of first matrix and rows of second matrix";
        return 0;    
}

int matrix2[rows2][cols2];
cout<<"Enter the elements of the second matrix: ";
for(i=0; i<rows2; i++){
    for(j=0; j<cols2; j++){
        cin>>matrix2[i][j];
    }
}

int resMatrix[rows1][cols2];

for(i=0; i<rows1; i++){
    for(j=0; j<cols2; j++){
        for(int k=0; k<cols1; k++){
            sum += matrix1[i][k] * matrix2[k][j];
        }
        resMatrix[i][j] = sum;
        sum = 0;
    }
}

cout<<"Multiplication marix of two matrices: \n";
for(i=0; i<rows1; i++){
    for(j=0; j<cols2; j++){
        cout<<resMatrix[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}