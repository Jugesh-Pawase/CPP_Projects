#include<iostream>
using namespace std;

int main(){
int a[3][3], i, j;
float d=0;

cout<<"Enter 3*3 elements of the matrix:"<<endl;
for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        cin>>a[i][j];
    }
}

cout<<"The matrix is :"<<endl;
for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}

for(i=0; i<3; i++){
    d = d + (a[0][i] * (a[1][(i+1)%3]) * a[2][(i+2)%3] - a[1][(i+2)%3] * a[2][(i+1)%3]);
}

cout<<"Inverse of matrix is: "<<endl;
for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        cout<<((a[(i+1)%3][(j+1)%3] * a[(i+2)%3][(j+2)%3]) - (a[(i+1)%3][(j+2)%3] * a[(i+2)%3][(j+1)%3]))/d<<" ";
    }
    cout<<endl;
}

    return 0;
}